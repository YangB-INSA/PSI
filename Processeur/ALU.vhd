----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:19:32 04/20/2020 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity ALU is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (3 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           Z : out  STD_LOGIC;
           C : out  STD_LOGIC;
           S : out  STD_LOGIC_VECTOR (7 downto 0));
end ALU;

architecture Behavioral of ALU is
signal temp : STD_LOGIC_VECTOR (15 downto 0):= (Others => '0');
signal A_temp : STD_LOGIC_VECTOR (8 downto 0);
signal B_temp : STD_LOGIC_VECTOR (8 downto 0);
begin
   
	 A_temp <= (b"0" & A);
    B_temp <= (b"0" & B);
	 temp <= (b"0000000"&(A_temp + B_temp)) when Ctrl_Alu = "0001" else --addition
			   (b"0000000"&(A_temp - B_temp)) when Ctrl_Alu = "0010" else -- soustraction
				 A * B when Ctrl_Alu = "0011" ; --multiplication

	 N <= '0'; -- negative
    O <= '0'; -- overflow
	 Z <= '1' when temp(7 downto 0)="00000000" else '0'; --zero
	 C <= temp(8); -- carry
    S <= temp(7 downto 0); --solution
end Behavioral;

