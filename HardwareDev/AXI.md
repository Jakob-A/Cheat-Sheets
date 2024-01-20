AXI is a bus protocol belonging to the ARM AMBA family. Some key features are:
- address/control phases are separate from data phases
- byte strobes enable unaligned data transfers
- burst-based transactions possible with only start address issued
- read and write data channels are separate allowing low-cost Direct Memory Access (DMA)
- multiple outstanding addresses can be issued
- transactions can be completed out-of-order
- register stages are easily added for timing closure

## AXI Variations

- **AXI4:**
- **AXI4-Lite:** smaller logic interface, does not support burst data and only a single data transfer per transaction
- **AXI4-Stream:** writing only from master to slave possible, for unlimited data bursts

## Architecture

### Write Channel
![[AXI4-write-channel-architecture.png]]
### Read Channel
![[AXI4-read-channel-architecture.png]]]



## Sources

First Version of the [ZynqBook](http://www.zynqbook.com/download-book.php) (Published: July 2014)
