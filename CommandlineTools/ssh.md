# Cheat Sheet SSH

## Useful Option

**Local Port Forwarding**
```Shell
ssh -L [LOCAL_IP:]LOCAL_PORT:DESTINATION:DESTINATION_PORT [USER@]SSH_SERVER
```
-   `[LOCAL_IP:]LOCAL_PORT` - The local machine IP address and port number. When `LOCAL_IP` is omitted, the ssh client binds on the localhost.
-   `DESTINATION:DESTINATION_PORT` - The IP or hostname and the port of the destination machine.
-   `[USER@]SERVER_IP` - The remote SSH user and server IP address.

**Remote Port Forwarding**
```sh
ssh -R [REMOTE:]REMOTE_PORT:DESTINATION:DESTINATION_PORT [USER@]SSH_SERVER
```
-   `[REMOTE:]REMOTE_PORT` - The IP and the port number on the remote SSH server. An empty `REMOTE` means that the remote SSH server will bind on all interfaces.
-   `DESTINATION:DESTINATION_PORT` - The IP or hostname and the port of the destination machine.
-   `[USER@]SERVER_IP` - The remote SSH user and server IP address.

## Generate ssh - key

1. `ssh-keygen -t ecdsa -b 521`
2. set config in `~/.ssh/config`  
   Example:
   ```
   Host github.com  
        HostName github.com  
        User git  
        IdentityFile ~/.ssh/id_rsa_github
   ```  
3. copy ssh key to server:
   `ssh-copy-id -i ~/.ssh/[keyFile] [user]@[host]`
