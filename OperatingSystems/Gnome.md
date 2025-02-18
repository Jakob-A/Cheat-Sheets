### Remove/Add application from automatic start at boot

Go into directory  `home/[user]/.config/autostart` and remove file `[application].desktop`

## Add Desktop File Configuration
For more Information see: https://www.cyberciti.biz/howto/how-to-install-and-edit-desktop-files-on-linux-desktop-entries/

| Commands                                                                | Description                                            |
| :---------------------------------------------------------------------- | :----------------------------------------------------- |
| `desktop-file-validate <path-to-file>`                                  | Validate Desktop Configuration File                    |
| `desktop-file-install --dir=~/.local/share/applications <path-to-file>` | Install Desktop file under `.local/share/applications` |
| `update-desktop-database ~/.local/share/applications`                   | Update Gnome database to list the added app            |
### Location of Desktop Config Files
- The default Linux distro specific applications: `/usr/share/applications/`
- Third party specific applications:  `/usr/local/share/applications/`
- User specific applications: `~/.local/share/applications/`
