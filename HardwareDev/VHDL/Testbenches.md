
## Generate Clock

```VHDL
architecture test of testbench is
	signal clk : std_logic := '0';
begin
	clk <= not clk after 10 ns;
end architecture;
```