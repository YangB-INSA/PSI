----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:54:37 05/19/2020 
-- Design Name: 
-- Module Name:    LC - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
-- library UNISIM;
-- use UNISIM.VComponents.all;

entity LC is
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           W : out  STD_LOGIC_VECTOR (3 downto 0));
end LC;

architecture Behavioral of LC is
begin
	  W <="0001" when OP=x"05" or OP=x"06" or OP=x"07" ELSE --COP AFC LOAD
			"0011" when OP=x"01" else --ADD
			"0101" when OP=x"02" else --SUB
			"0111" when OP=x"03" else --MUL
			"0000" when OP=x"08"; --LOAD
end Behavioral;

