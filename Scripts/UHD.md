USRP Hardware Driver from Ettus Research

| Commands                                                                       | Description                                                                                                                                      |
| :----------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------- |
| `uhd_find_devices`                                                             | list devices attached to the current host<br>[Device Discovery](https://files.ettus.com/manual/page_identification.html)                         |
| `uhd_usrp_probe --args <e.g addr= or name=>`                                   | Print out properties of the connected board for example connected doughterboards etc.                                                            |
| `uhd_image_downloader --list-targets`                                          | Download available FPGA images for USRPs<br>[Download Pre-Build Images](https://files.ettus.com/manual/page_usrp_x3x0.html#x3x0_getting_started) |
| `uhd_image_loader --args <e.g addr= or name=>`                                 | Load image onto USRPs onboard flash                                                                                                              |
| `usrp_burn_mb_eeprom --args <e.g. addr= or name=> --values="ip-addr0=X.X.X.X"` | Change Parameters of EEPROM, like IP addr or name                                                                                                |

## Useful Links
[Getting Started X310](https://files.ettus.com/manual/page_usrp_x3x0.html#x3x0_getting_started)
[Setup Network Host Interface](https://files.ettus.com/manual/page_usrp_x3x0.html#x3x0_setup_network_host_interface)
[Configuring Host PC](https://files.ettus.com/manual/page_usrp_x3x0.html#x3x0_setup_network_host_interface)
[Install UHD from Source](https://files.ettus.com/manual/page_build_guide.html)