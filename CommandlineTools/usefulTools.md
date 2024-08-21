# Useful Commandline Tools

Some useful tools for the command line, which doesn't need a own cheat sheet.

## useful console commands

| Commands                                       | Description                                                         |
| :--------------------------------------------- | :------------------------------------------------------------------ |
| **`history`**                                  | show last console commands                                          |
| **`find`**                                     | search for files or directorys                                      |
| `find -name test.txt`                          | shows where test.txt is                                             |
| `find . -name \*test\*`                        | every file/dir with test in its name                                |
| **`grep -c [Pattern] [File]`**                 | get count of pattern in file                                        |
| `grep [Pattern] --exclude-dir=[directory]`     | exclude directory from search                                       |
| `cd -`                                         | jump back to the last used directory                                |
| `wc`                                           | list new lines, word count and byte count of file                   |
| `find . -name "*.py" \| xargs wc -l`           | count code lines in python files (option `-w` creates a word count) |
| `du -hs [directory]`                           | print disk usage of direktory                                       |
| `du -hd 1 [directory]`                         | print disk usage of all subdirectories                              |
| `tar xvf [tar archive]`                        | untar archive                                                       |
| `find . -name [file_name]xargs grep [Pattern]` | search in files with specific name                                  |
| `identify -verbose [path-to-image]`            | show format and properties of image files                           |

## keep ssh connection alive

Commands                                    | Description
:---                                        | :---
`tmux`                                      | starts a tmux session, this session is kept alive, if the connection gets interupted, [Cheat Sheet](https://tmuxcheatsheet.com)
`tmux rename-session -t [Session] [new Name]` | renames a session
`tmux attach -t [Session]`                  | attaches a session to current terminal
`crtl-b d`                                  | detach a session
`exit`                                      | close current session

### byobu

Commands                                    | Description
:---                                        | :---
`byobu new -s [session-name]`               | create a new session with a specific session name
`byobu-select-session`                      | list currently running byobu sessions and select one
F6                                          | exit session
`byobu-config` or F9                        | configure byobu status bar
`byobu list-session`                        | list running sessions
`byobu kill-session -t [session name]`      | kill session


## Networking

> required package **net-tools**

- `arp`
- `ifconfig`
- `ip`
- `netstat`
- `route`

Commands                                    | Description
:---                                        | :---
`ip -br a`                                  | show ip address
`hostname`                                  | show hostname
`hostnamectl set-hostname [new-hostname]`   | change hostname (alternative: edit `/etc/hostname`)
`nmap -sP [IP - Range]`                     | Ping scan in the network
`netstat -tunlp` | `-t` show tcp ports, `-u` show UDP ports, `n` show numerical addresses instead of resolving hosts, `-l` show only listening ports, `-p` show PID and the name of the listener's process 


# Analyze binaries

Commands                                    | Description
:---                                        | :---
`file [file]`                               | prints file type and other general information
`ldd [file]`                                | print shared object dependencies
`ltrace [file]`                             | displays all the binary functions that are used !! executes the file
`hexdump [file]`                            | print hex of binary
`strings [file]`                            | print strings included in the binary
`readelf [options] [file]`                  | display information about ELF files
`objdump -d [file]`                         | disassemble file, with other options other information about the binary
`nm [file]`                                 | list symbols of the file
