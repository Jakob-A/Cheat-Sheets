# Raspberri Pi Notes

## Enable SSH

1. insert and mount SD Card
2. create empty `ssh` file on the sd card (`touch ssh`)
3. Boot Raspi and connect with `ssh pi@[raspberrypi_ip_address]` (Password: `raspberry`)

## Enable UART

1. open `/boot/config.txt`
2. add `enable_uart=1` at the end
3. reboot pi

**Disable Linux Console output via console**
1. Disable serial-getty service: `sudo systemctl disable serial-getty@ttyS0.service`
2. Open `/boot/cmdline.txt`
3. Remove `console=serial0, 115200`
4. reboot pi
