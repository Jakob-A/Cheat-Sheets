# Linux command line

## Networking
> required package **net-tools**
 - `arp`
 - `ifconfig`
 - `ip`
 - `netstat`
 - `route`

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


## useful console scripts
| Commands                                    | Description
| :---                                        | :---
|**`history`**                                | show last console commands
|**`find`**                                   | search for files or directorys 
|`find -name test.txt`                        | shows where test.txt is
|`find . -name \*test\*`                      | every file/dir with test in its name 
|**`command > out.txt`**                      | redirect stdout
|**`command 2> out.txt`**                     | redirect stderr
|**`command > out.txt 2>&1`**                 | redirect both

## System information
| Commands                                    | Description
| :---                                        | :---
| `cat /proc/cpuinfo`                         | shows information about the cpu cores