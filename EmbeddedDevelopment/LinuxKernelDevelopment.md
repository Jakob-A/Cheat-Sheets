# Linux Kernel Development

Useful commands for linux kernel development

| Commands                       | Description                           |
| :----------------------------- | :------------------------------------ |
| `modinfo [Module Name]`        | get informations about module         |
| `insmod`                       | load kernel module at runtime         |
| `uname -r`                     | get running linux kernel version      |
| `rmmod`                        | remove linux kernel module            |
| `cat /boot/config-$(uname -r)` | see linux kernel config file          |
| `modprobe <module>`            | manually load a module                |
| `modprobe -c \| wc -l`         | Count the number of available modules |
| `lsmod`                        | see the loaded modules                |

[Building External Modules](https://www.kernel.org/doc/html/latest/kbuild/modules.html)