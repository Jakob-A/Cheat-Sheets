# Linux command line



## System Administration

| Commands                                    | Description
| :---                                        | :---
|**`systemd`**                                | system and service manager
|**`systemctl`**                              | control services
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
| `passwd [user]`                             | change user password (all passwords are stored in `/etc/shadow`)
| `passwd -d [user]`                          | clears/deletes password of user
| `sudo shutdown now`                         | initialise shutdown
| `adduser [user]`                            | add user
| `groups [user]`                             | see user's groups
| `usermod -aG [group] [user]`                | add user to specific group


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


## System information

| Commands                                    | Description
| :---                                        | :---
| `cat /proc/cpuinfo`                         | shows information about the cpu cores
| `cat /proc/meminfo`                         | prints memory information
| `cat /proc/[PID]/maps`                      | show memory areas of process

> Install and configure samba [https://ubuntu.com/tutorials/install-and-configure-samba#1-overview]
