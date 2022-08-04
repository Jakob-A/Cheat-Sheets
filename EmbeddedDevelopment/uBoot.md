# uBOOT

| Commands                                      | Description
| :---                                          | :---
| `h`                                           | help: shows available commands
| `printenv`                                    | print environment variables
| `setenv`                                      | set environment variables
| `boot`                                        | boot kernel
| `bootm ${kernel_load_address} ${ramdisk_load_address} ${devicetree_load_address}` | boot kernel with ramdisk and devicetree, `-` instead of ramdisk address specifies boot without ramdisk

## uEnv.txt

With the `uEnv.txt` it is possible to override/set specific boot parameter of u-boot.
Example:
```
sd_boot=if mmcinfo; then echo Copying Linux from SD to RAM... && load mmc 0 ${kernel_load_address} ${kernel_image} && load mmc 0 ${ramdisk_load_address} ${ramdisk_image} && load mmc 0 ${devicetree_load_address} ${devicetree_image} && bootm ${kernel_load_address} ${ramdisk_load_address} ${devicetree_load_address}; fi
uenvcmd=run sd_boot
```
This example changes the boot process. U-Boot checks -before starting the autoboot process- if it can find a uEnv.txt and to execute the `uenvcmd`.