# Linux command line



## System Administration

| Commands                                    | Description                                                                                                                                                    |
| :------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **`systemd`**                               | system and service manager                                                                                                                                     |
| **`systemctl`**                             | control services                                                                                                                                               |
| `systemctl status [service]`                | get status information about the service                                                                                                                       |
| `systemctl reload-or-restart [service]`     | restart service                                                                                                                                                |
| `systemctl kill [service]`                  | terminate service                                                                                                                                              |
| `systemctl is-active [service]`             | check if service is running                                                                                                                                    |
| `systemctl cat [service]`                   | show information about the service                                                                                                                             |
| `systemd-analyse`                           |                                                                                                                                                                |
| `printenv`                                  | print enviroment variables                                                                                                                                     |
| `du`                                        | get file/directory size/disk usage                                                                                                                             |
| `system --status-all`                       | list status of services                                                                                                                                        |
| `sudo update-alternatives --config python3` | change python3 version (*if the config python3 was set before*)                                                                                                |
| `passwd [user]`                             | change user password (all passwords are stored in `/etc/shadow`)                                                                                               |
| `passwd -d [user]`                          | clears/deletes password of user                                                                                                                                |
| `sudo shutdown now`                         | initialise shutdown                                                                                                                                            |
| `who`                                       | list logged in user                                                                                                                                            |
| `adduser [user]`                            | add user                                                                                                                                                       |
| `groups [user]`                             | see user's groups                                                                                                                                              |
| `usermod -aG [group] [user]`                | add user to specific group                                                                                                                                     |
| `ps -u [user]`                              | see processes run by a specified user                                                                                                                          |
| `sudo sysctl vm.swappiness=10`              | Change swappinnes value (0 swapping is avoided, 100 aggressive swapping)<br>To make the value persistent change/add line `vm.swappiness` in `/etc/sysctl.conf` |


### Delete User

1. Lock the account: `sudo passwd -l [user]`
2. Kill running processes `sudo pkill -KILL -u [user]`
3. Remove cron jobs `sudo crontab -r -u [user]`
4. Remove print jobs `lprm -U [user]`
5. Delete User:
	- on Debian Systems: `sudo deluser --remove-home [user]`
	- on all other: `sudo userdel --remove [user]`


## Update Tools

| Commands                                                    | Description             |
| :---------------------------------------------------------- | :---------------------- |
| `apt list --installed`                                      | list installed packages |
| `apt remove [package]`                                      | uninstall package       |
| `fwupdmgr update`                                           | update firmware         |
| `fwupdmgr get-updates`                                      | get firmware updates    |
| `cat /etc/apt/sources.list`<br>`ls /etc/apt/source.list.d/` | list apt sources        |
|                                                             |                         |


## Change Permissions

| Commands                                    | Description             |
| :------------------------------------------ | :---------------------- |
| **`chown [owner/group owner] [file name]`** | change owner of file    |
| **`chmod [permissions] [file name]`**       | change file permissions |
| `chgrp [group] [file name]`                 | change group of file    |

## Config Files
| Commands | Description |
| :--- | :--- |
| `/etc/fstab` | Configure mount points at startup, you can mount all devices manually with `sudo mount -a` |

## System information

| Commands               | Description                           |
| :--------------------- | :------------------------------------ |
| `cat /proc/cpuinfo`    | shows information about the cpu cores |
| `cat /proc/meminfo`    | prints memory information             |
| `cat /proc/[PID]/maps` | show memory areas of process          |
| `df -h`                | display filesystems                   |
| `cat /etc/os-release`  | Show OS/Distro Version                |


> Install and configure samba [https://ubuntu.com/tutorials/install-and-configure-samba#1-overview]

## Increase Swap File Size

### Raspbian
1. Stop OS from using swap file `sudo dphys-swapfile swapoff`
2. Modify configuration file: `/etc/dphys-swapfile` - edit `CONF_SWAPSIZE`
3. Reinitilize swap: `sudo dphys-swapfile setup`
4. Turn swap file usage on: `sudo dphys-swapfile swapon`
5. Reboot system

### Ubuntu
> Copied from this [tutorial](https://linux.how2shout.com/how-to-increase-swap-space-in-ubuntu-22-04-lts-jammy/).
1. Turn off swap: `sudo swapoff -a`
2. Create new swapfile: `sudo fallocate -l 8G /swapfile`
3. Change access permissions: `sudo chmod 600 /swapfile`
4. Mark file as swap space: `sudo mkswap /swapfile`
5. Turn on swap: `sudo swapon /swapfile`
6. Check change with: `sudo swapon -s` or `free -h`
7. Add uncomment old swap and add new swap in `/etc/fstab` add this: `sudo swapon /swapfile
-> https://linux.how2shout.com/how-to-increase-swap-space-in-ubuntu-22-04-lts-jammy/