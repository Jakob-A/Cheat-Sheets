Sign | Name
:--- | :---
~ | NOT
& | AND
\| | OR
\* | mult
/ | divide
% | mod
+, - | plus, minus
^ | XOR
~& | NAND
~\| | NOR
<<, >> | shift
<<< , >>> | arithmetic shift
<, <=, >. >= | comparison
\==, != | equal, not equal

### Reduction Operators
```Verilog
logic [7:0] a, logic y
y = &a // -> means y = a[7] & a[6] & ... & a[1] & a[0]
```

### Concatenation
```Verilog
y = {a[2:1], {3{b[0]}}, 8'hAB};
  = {a[2], a[1], b[0], b[0], b[0], 4'hA, 4'hB}
```

### Replication
```Verilog
3{b[0]} = {b[0], b[0], b[0]}
```