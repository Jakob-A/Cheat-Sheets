### Module Types

***Behavioral:*** A module that uses only logic elements to describe a circuit. -> for very basic modules
***Structural***: A module that uses other modules, as well as arithmetic elements to describe a circuit. -> for hierarchical design

### Module Declaration
```Verilog
module example(input logic a, b, c
			   output logic y);
endmodule
```

### Module Instantiation
```Verilog
example example(.a(sinput1), .b(input2), .c(input3), .y(input4))
```
