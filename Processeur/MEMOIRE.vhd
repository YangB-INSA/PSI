----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:55:49 05/04/2020 
-- Design Name: 
-- Module Name:    MEMOIRE - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity MEMOIRE is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           N : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           OUTA : out  STD_LOGIC_VECTOR (7 downto 0));
end MEMOIRE;

architecture Behavioral of MEMOIRE is
type data_array is array (255 downto 0) of STD_LOGIC_VECTOR(7 downto 0);
signal data : data_array := (0=> x"FF", others => x"00");

begin
	process 
	begin
	wait until CLK'event and CLK = '1';
		if RST = '0' then
			data <= (others => x"00");
		else 
			if RW = '1' then --lecture
				OUTA <= data(to_integer(unsigned(A)));
			else 
				if RW ='0' then --ecriture
					data(to_integer(unsigned(A)))<= N;
				end if;
			end if;
		end if;	
	end process;
end Behavioral;

