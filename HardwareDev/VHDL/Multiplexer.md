```VHDL
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_4to1_top is
    Port ( SEL : in  STD_LOGIC_VECTOR (1 downto 0);     -- select input
           A   : in  STD_LOGIC_VECTOR (3 downto 0);     -- inputs
           X   : out STD_LOGIC);                        -- output
end mux_4to1_top;

architecture Behavioral of mux_4to1_top is
begin
    X <= A(0) when (SEL = "00") else
         A(1) when (SEL = "01") else
         A(2) when (SEL = "10") else
         A(3) when (SEL = "11") else A(0);
end Behavioral;
```
