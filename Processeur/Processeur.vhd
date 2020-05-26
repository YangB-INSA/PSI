----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:50:11 05/12/2020 
-- Design Name: 
-- Module Name:    Processeur - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity Processeur is
    Port ( IP : in STD_LOGIC_VECTOR (7 downto 0);
			  RST : in STD_LOGIC;
	        CLK : in STD_LOGIC;
			  N_ALU: out STD_LOGIC;
			  O_ALU: out STD_LOGIC;
			  Z_ALU: out STD_LOGIC;
			  C_ALU: out STD_LOGIC);
end Processeur;

architecture Behavioral of Processeur is

component memoire_instruct
	Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
          CLK : in  STD_LOGIC;
          OUTA : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component ALU
	Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
          B : in  STD_LOGIC_VECTOR (7 downto 0);
          Ctrl_Alu : in  STD_LOGIC_VECTOR (3 downto 0);
          N : out  STD_LOGIC;
          O : out  STD_LOGIC;
          Z : out  STD_LOGIC;
          C : out  STD_LOGIC;
          S : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component BANC
	Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
          B : in  STD_LOGIC_VECTOR (3 downto 0);
          ADDR_W : in  STD_LOGIC_VECTOR (3 downto 0);
          W : in  STD_LOGIC;
          DATA : in  STD_LOGIC_VECTOR (7 downto 0);
          RST : in  STD_LOGIC;
          CLK : in  STD_LOGIC;
          QA : out  STD_LOGIC_VECTOR (7 downto 0);
          QB : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component data_mem
	Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
          N : in  STD_LOGIC_VECTOR (7 downto 0);
          RW : in  STD_LOGIC;
          RST : in  STD_LOGIC;
          CLK : in  STD_LOGIC;
          OUTA : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component Pipeline
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           OP : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           C : in  STD_LOGIC_VECTOR (7 downto 0);
           A_OUT : out  STD_LOGIC_VECTOR (7 downto 0);
           OP_OUT : out  STD_LOGIC_VECTOR (7 downto 0);
           B_OUT : out  STD_LOGIC_VECTOR (7 downto 0);
           C_OUT: out STD_LOGIC_VECTOR (7 downto 0);
			  CLK : in  STD_LOGIC);
end component;

component LC_ALU
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : out  STD_LOGIC_VECTOR (3 downto 0));
end component;

component LC_MEM_RE
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           W : out  STD_LOGIC);
end component;

component LC_DATA is
	    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
              RW : out  STD_LOGIC);
end component;


for all: memoire_instruct	 use entity work.Memoire_instruct(Behavioral);
for all: Pipeline 	       use entity work.Pipeline(Behavioral); 
for all: BANC	             use entity work.BANC(Behavioral); 
for all: ALU			       use entity work.ALU(Behavioral); 
for all: data_mem 		    use entity work.MEMOIRE(Behavioral);
for all: LC_MEM_RE 			       use entity work.LC_MEM_RE(Behavioral); 
for all: LC_DATA			       use entity work.LC_DATA(Behavioral);
for all: LC_ALU		       use entity work.LC_ALU(Behavioral);      

signal data_inst: STD_LOGIC_VECTOR(31 downto 0);
signal A,OP,B,C,A1,OP1,B1,C1,A2,OP2,B2,C2,A3,OP3,B3,C3,ADDR_W,DATA,QA,QB,MUX1,MUX2,MUX3,MUX4,S,OUT_MEM: STD_LOGIC_VECTOR(7 downto 0);
signal Ctrl_Alu: STD_LOGIC_VECTOR(3 downto 0);
signal W,RW:STD_LOGIC;


begin

	--mémoire des instructions
   Instruct_mem:Memoire_instruct port map(IP,
														CLK,
														data_inst);
	
	--ETAGE 1
	LI_DI:Pipeline port map(data_inst(7 downto 0), 
									data_inst(15 downto 8),
									data_inst(23 downto 16),
									data_inst(31 downto 24),
									A,
									OP,
									B,
									C,
									CLK);
	
	--Banc de registres
	bench:BANC port map(B(3 downto 0),
							  C(3 downto 0),
							  ADDR_W(3 downto 0),
							  W,
							  DATA,
							  RST,
							  CLK,
							  QA,
							  QB);
	
	--MUX1
	MUX1 <= B when OP = x"06" or OP = x"07" else 
			  QA;

	--ETAGE 2
	DI_EX:Pipeline port map(A,
									OP,
									MUX1,
									QB,
									A1,
									OP1,
									B1,
									C1,
									CLK);
	
	--LC1
	LC1:LC_ALU port map(OP1,
							  Ctrl_Alu);
	
	--UAL
	UAL:ALU port map(B1,
						  C1,
						  Ctrl_Alu,
						  N_ALU,
						  O_ALU,
						  Z_ALU,
						  C_ALU,
						  S);
	
	--MUX2
	MUX2 <= S when OP1=x"01" or OP1=x"02" or OP2=x"03" else B1; 	
	
	--ETAGE 3
	EX_Mem:Pipeline port map(A1,
									 OP1,
									 MUX2,
									 C1,
									 A2,
									 OP2,
									 B2,
									 C2,
									 CLK);
	
	--MUX3
	MUX3 <= A2 when OP2=x"08" else B2;
	
	--LC2
	LC2:LC_DATA port map(OP2,
						      RW);
	
	--Mémoire des données
	Mem_Data:data_mem port map(MUX3,
										B2,
										RW,
										RST,
										CLK,
										OUT_MEM);
	
	--MUX4
	MUX4 <= OUT_MEM when OP2 = x"07" else B2; --if OP = LOAD 
	
	--ETAGE 4
	Mem_RE:Pipeline port map(A2,
									 OP2,
									 MUX4,
									 C2,
									 ADDR_W,
									 OP3,
									 DATA,
									 C3,
									 CLK);
	
	--LC3
	LC3:LC_MEM_RE port map(OP3,
								  W);
	
end Behavioral;

