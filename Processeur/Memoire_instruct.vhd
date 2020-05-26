----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:17:37 05/04/2020 
-- Design Name: 
-- Module Name:    Memoire_instruct - Behavioral 
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
--library UNISIM;
--use UNISIM.VComponents.all;

entity Memoire_instruct is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           OUTA : out  STD_LOGIC_VECTOR (31 downto 0));
end Memoire_instruct;

architecture Behavioral of Memoire_instruct is
type instruction_array is array (255 downto 0) of STD_LOGIC_VECTOR(31 downto 0);
-- instancier les premieres instructions pour les tests
signal instruction : instruction_array := 
	(0 => x"00020600", --AFC
	 1 => x"000F0601", --AFC
	 2 => x"01000102", --ADD
	 3 => x"00010203", --SUB
	 4 => x"00010304", --MUL
	 5 => x"00000705", --LOAD
	 6 => x"000808FF", --STORE
	 7 => x"00050506", --COP
	 others => X"00000000");

begin
	process
	begin
	wait until CLK'event and CLK = '1';
		OUTA <= instruction(to_integer(unsigned(A)));
	end process;
end Behavioral;

