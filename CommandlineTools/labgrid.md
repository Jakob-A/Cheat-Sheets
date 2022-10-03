# Labgrid Cheat Sheet

*"Labgrid is an embedded board control python library with a focus on testing, development and general automation. It includes a remote control layer to control boards connected to other hosts."* \[[Labgrid Documentation](https://labgrid.readthedocs.io/en/latest/index.html)\]


| Commands                                      | Description
| :---                                          | :---
| `labgrid-client -v places`                    | Lists all connected devices
| `labgrid-client -p [device-name] acquire`     | aquire a device
| `labgrid-client -p [device-name] power on`    | turn on power of the device
| `labgrid-client -p [device-name] power off`   | turn off the device's power
| `labgrid-client -p [device-name] release`     | release aquired device
| `labgrid-client who`                          | list aquired devices and who aquires them
