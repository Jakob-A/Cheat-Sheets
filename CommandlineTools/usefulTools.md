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

## keep ssh connection alive

| Commands                                    | Description
| :---                                        | :---
| `tmux`                                      | starts a tmux session, this session is kept alive, if the connection gets interupted, [Cheat Sheet](https://tmuxcheatsheet.com)
| `tmux rename-session -t [Session] [new Name]` | renames a session
| `tmux attach -t [Session]`                  | attaches a session to current terminal
| `crtl-b d`                                  | detach a session
| `exit`                                      | close current session

### byobu

| Commands                                    | Description
| :---                                        | :---
| `byobu new -s [session-name]`               | create a new session with a specific session name
| `byobu-select-session`                      | list currently running byobu sessions and select one
| F6                                          | exit session
| `byobu-config` or F9                        | configure byobu status bar
| `byobu list-session`                        | list running sessions
| `byobu kill-session -t [session name]`      | kill session


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