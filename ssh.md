# Cheat Sheet SSH

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
