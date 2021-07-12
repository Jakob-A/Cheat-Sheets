# Linux command line

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


## System Administration
| Commands                                    | Description
| :---                                        | :---
|**`systemd`**                                | system and service manager
|**`systemctl`**                                  | control services
|`systemctl status [service]`                 | get status information about the service
|`systemctl reload-or-restart [service]`      | restart service
|`systemctl kill [service]`                   | terminate service
|`systemctl is-active [service]`              | check if service is running
| `systemctl cat [service]`                   | show information about the service
| `systemd-analyse`                           |
| `printenv`                                  | print enviroment variables
| `du`                                        | get file/directory size/disk usage
| `system --status-all`                       | list status of services
| `sudo update-alternatives --config python3` | change python3 version (*if the config python3 was set before*)

## apt package manager
| Commands                                    | Description
| :---                                        | :---
| `apt list --installed`                      | list installed packages
| `apt remove [package]`                      | uninstall package

## change permissions
| Commands                                    | Description
| :---                                        | :---
| **`chown [owner/group owner] [file name]`** | change owner of file
| **`chmod [permissions] [file name]`**       | change file permissions


## useful console commands
| Commands                                    | Description
| :---                                        | :---
|**`history`**                                | show last console commands
|**`find`**                                   | search for files or directorys 
|`find -name test.txt`                        | shows where test.txt is
|`find . -name \*test\*`                      | every file/dir with test in its name 
|**`command > out.txt`**                      | redirect stdout
|**`command 2> out.txt`**                     | redirect stderr
|**`command > out.txt 2>&1`**                 | redirect both
**`grep -c [Pattern] [File]`**                 | get count of pattern in file

## System information
| Commands                                    | Description
| :---                                        | :---
| `cat /proc/cpuinfo`                         | shows information about the cpu cores
| `cat /proc/meminfo`                         | prints memory information


## keep ssh connection alive

| Commands                                    | Description
| :---                                        | :---
| `tmux`                                      | starts a tmux session, this session is kept alive, if the connection gets interupted, [Cheat Sheet](https://tmuxcheatsheet.com)
| `tmux rename-session -t [Session] [new Name]` | renames a session
| `tmux attach -t [Session]`                  | attaches a session to current terminal
| `crtl-b d`                                  | detach a session
| `exit`                                      | close current session

> Install and configure samba [https://ubuntu.com/tutorials/install-and-configure-samba#1-overview]