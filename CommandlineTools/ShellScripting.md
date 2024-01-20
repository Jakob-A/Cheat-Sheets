# Cheat Sheet for Shell Scripting
These commands are for the shell `bash`, but should work with most other shells.

Commands                                      | Description
:---                                          | :---
`command > out.txt`                           | redirect stdout
`command 2> out.txt`                          | redirect stderr (stdout is 1, stderr is 2)
`command > out.txt 2>&1`                      | redirect both
`command1; command2`                          | execute multiole commands in one line
`command1 && command2`                        | second command is only executed if the first command was succesful
`command1 \|\| command2`                      | second command is only executed if the first command failed
``echo String `command` ``                    | execute command inside string
`$!`                                          | get PID of process that was started with `process &`
`$$`                                          | get PID of running Shell
`$?`                                          | get return value of last process
`$#`                                          | get number of given parameters
`$*` / `$@`                                   | get all given parameters
`$[number]`                                   | get call parameter
`if [ condition ]` <br> `then` <br> `...` <br>`elif [ conition2 ]` <br> `...` <br> `else` <br>`...` <br> `fi` | if - condition
`[ string1 = string2 ]`                       | true if both strings are identical
`[ string1 != string2 ]`                      | true if both strings are not identical
`[ -n string ]`                               | true if string is not zero
`[ -z string ]`                               | true if string is zero
`[ value1 -eq value2 ]`                       | true if values are the same, other options are <br> `-ne` (not equal) <br> `-gt` (greater than) <br> `-ge` (greater than or equal) <br> `-lt` (less than) <br> `-le` (less than or equal to) <br> `!value` (not)
`[ -d file ]`                                 | check if file is an directory, other options: <br> `-e` (file exists) <br> `-f` (normal file) <br> `-g` (is group id set?) <br> `-r` (readable) <br> `-s` (file exists and is bigger than 0 bytes) <br> `-u` (is user id set?) <br> `-w` (writable) <br> `-x` (executable) 
`set -e`                                      | Shell scripts exit on error
`cut -d ":" -f 1` | splits each input line at the ":" character
`${#STRING}` | return number of characters contained by a string
`getopts` | Program which parses command line options
`readarray -t arrayName < <(InputCommand)` | Split input lines into shell array
