--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:12:36 05/24/2020
-- Design Name:   
-- Module Name:   D:/Projet INSA/Processeur/Test_Processeur.vhd
-- Project Name:  Processeur
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Processeur
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Test_Processeur IS
END Test_Processeur;
 
ARCHITECTURE behavior OF Test_Processeur IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Processeur
    PORT(
         IP : IN  std_logic_vector(7 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal IP : std_logic_vector(7 downto 0) := (others => '0');
   signal RST : std_logic := '1';
   signal CLK : std_logic := '0';

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Processeur PORT MAP (
          IP => IP,
          RST => RST,
          CLK => CLK
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		IP <= X"00"; --AFC 00 02
		wait for 100ns;
		IP <= X"01"; --COP 01 00
		wait for 100ns;
		IP <= X"02"; --ADD 02 01 00
		wait for 100ns;
		IP <= X"03"; --SUB 03 01 00
		wait for 100ns;	
		IP <= X"04"; --MUL 04 01 00
		wait for 100ns;
		IP <= X"05"; --STORE 00 FF 00
		wait for 100ns;
		IP <= X"06"; --LOAD FF 08 00

      -- insert stimulus here 

      wait;
   end process;

END;
