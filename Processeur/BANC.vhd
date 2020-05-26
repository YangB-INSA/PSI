----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:47:04 05/04/2020 
-- Design Name: 
-- Module Name:    BANC - Behavioral 
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

entity BANC is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           ADDR_W : in  STD_LOGIC_VECTOR (3 downto 0);
           W : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (7 downto 0);
           QB : out  STD_LOGIC_VECTOR (7 downto 0));
end BANC;

architecture Behavioral of BANC is
type registre_array is array (15 downto 0) of STD_LOGIC_VECTOR(7 downto 0);
signal rgst : registre_array := (8=>"01010101",others => x"00");

begin

	--reset et écriture synchrone
	process
	begin
		wait until CLK'event and CLK = '1';
		if RST = '0' then 
			rgst <= (others => "00000000");	--RST
		end if;
		if W ='1' then
			rgst(to_integer(unsigned(ADDR_W))) <= DATA; -- Write
		end if;
	end process;
	
	
	--lecture asynchrone
	process (A,B)
	begin
		if W = '1' then 
			if ADDR_W=B then 
				QA <= rgst(to_integer(unsigned(A)));
				QB <= DATA;
			elsif ADDR_W=A then 
				QB <= rgst(to_integer(unsigned(B)));
				QA <= DATA;			
			else				
				QB <= rgst(to_integer(unsigned(B)));
				QA <= rgst(to_integer(unsigned(A)));
			end if;
		else 
			QA <= rgst(to_integer(unsigned(A)));
			QB <= rgst(to_integer(unsigned(B)));
		end if;
	end process;
	
end Behavioral;
	


