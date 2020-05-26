----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:46:18 05/19/2020 
-- Design Name: 
-- Module Name:    LC_ALU - Behavioral 
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

entity LC_ALU is
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : out  STD_LOGIC_VECTOR (3 downto 0));
end LC_ALU;

architecture Behavioral of LC_ALU is
begin
	  Ctrl_Alu <="0001" when OP=x"01" else --ADD
					 "0010" when OP=x"02" else --SUB
					 "0011" when OP=x"03"; --MUL
			
end Behavioral;


