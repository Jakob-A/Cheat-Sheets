
Command | Description
:--- | :---
`docker container inspect [container] \| grep IPAddress` | get IPAddress of running docker container
`docker ps -a` | show all docker container (running + not running)
`docker exec -it [container] [Name of shell]` | start a shell in the specified container
`docker run -v [host directory]:[container directory] -it [image] /bin/bash` | run bash in new container
`docker rename [container] [new name]` | rename container
`docker rm [container]` | delete container