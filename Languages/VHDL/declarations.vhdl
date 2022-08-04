-- This file shows different ways to declarate variables/constants and signals
-- in vhdl.

-- generate your own data type
type data_type is std_logic_vector(2 downto 0);

-- generate constants with your data type
constant DT_NONE : data_type      := "000";
constant DT_PASSWORD : data_type  := "001";
constant DT_HASH : data_type      := "010";
constant DT_SALT : data_type      := "011";
constant DT_COST : data_type      := "100";