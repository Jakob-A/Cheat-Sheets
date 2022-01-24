# Useful Commandline Tools

Some useful tools for the command line, which doesn't need a own cheat sheet.

## useful console commands

| Commands                                  | Description
| :---                                      | :---
| **`history`**                             | show last console commands
| **`find`**                                | search for files or directorys
| `find -name test.txt`                     | shows where test.txt is
| `find . -name \*test\*`                   | every file/dir with test in its name
| **`grep -c [Pattern] [File]`**            | get count of pattern in file
| `cd -`                                    | jump back to the last used directory
| `wc`                                      | list new lines, word count and byte count of file

## keep ssh connection alive

| Commands                                    | Description
| :---                                        | :---
| `tmux`                                      | starts a tmux session, this session is kept alive, if the connection gets interupted, [Cheat Sheet](https://tmuxcheatsheet.com)
| `tmux rename-session -t [Session] [new Name]` | renames a session
| `tmux attach -t [Session]`                  | attaches a session to current terminal
| `crtl-b d`                                  | detach a session
| `exit`                                      | close current session

## Networking

> required package **net-tools**

- `arp`
- `ifconfig`
- `ip`
- `netstat`
- `route`

| Commands                                    | Description
| :---                                        | :---
| `ip -br a`                                  | show ip address
| `hostname`                                  | show hostname
| `hostnamectl set-hostname [new-hostname]`   | change hostname (alternative: edit `/etc/hostname`)