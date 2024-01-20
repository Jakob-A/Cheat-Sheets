==*N'B\[Number\]*==
N - Number of Bits
B - base (b - binary, o - octal, d - decimal, h - hexadecimal)

*Examples*
```Verilog
3'b101 // -> 101
8'h10  // -> 0001 0000
'b11   // -> unsized number, gets as big as the desination
8'b1010_1110 // -> underscores get ignored, they can be used for better readability
```