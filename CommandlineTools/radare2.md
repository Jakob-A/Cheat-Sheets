# Radare2 Cheat Sheet

| Key Board Shortcuts                         | Description
| :---                                        | :---
| `[SHIFT] v`                                 | enter visual mode
| `q`                                         | quit visual mode
| `p`                                         | switch viewing mode forwards
| `[SHIFT] p`                                 | switch viewing mode backwards
| `:`                                         | open prompt
| seek with arrow keys to call + hit enter    | jumps to the destination of the call
| `i` `i?`                                    | Info module
| `iz`                                        | show strings
| `iS`                                        | show symbols
| `ii`                                        | show imports


| Prompt commands                             | Description
| :---                                        | :---
| `aaa`                                       | Analyse binary
| `afl`                                       | show functions
| `s [function name]`                         | go to function name
| `axt`                                       | see from where a function is called (crossreference to)
| `axf`                                       | crossreference from

## radare2 Utilities

**`rabin2`**
Command line tool from radare2, which can list all sorts of informations about the binary.
*Examples:*
`rabin2 -I [binary]` - lists necessary information about the binary
`rabin2 -z [binary]` - show strings used in the binary
`rabin2 -s [binary]` - show all symbols in the binary

**`rafind2`**
Tool to search binaries.
*Examples*
`rafind2 -s printf [binary]` - shows addresses where it can find printf