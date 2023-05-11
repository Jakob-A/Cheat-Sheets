## Entity
> Describes module's interface
```VHDL
entity entity_name is
[generic (generic list)] [port (port_list);]
entity_declarative_part
begin
	pasive_concurrent_statement
end [entity] entity_name;
```

## Architecture
> Describes module's functionality 
```VHDL
architecture architecture_name of entity_name is
	architecture_declarative_part
begin
	all_concurrent_statements
end [architecture] architecture_name;
```

## Example with NOT - Gate

```VHDL
library ieee;
use ieee.std_logic_1164.all;

entity not1 is
	port(i : in std_logic;
		 o : out std_logic);
end not1;

architecture behavioral of not1 is
begin
	o <= not i;
end behavioral;
```
