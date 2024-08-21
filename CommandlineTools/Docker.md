
| Command                                                                      | Description                                            |
| :--------------------------------------------------------------------------- | :----------------------------------------------------- |
| `docker container inspect [container] \| grep IPAddress`                     | get IPAddress of running docker container              |
| `docker ps -a`                                                               | show all docker container (running + not running)      |
| `docker exec -it [container] [Name of shell]`                                | start a shell in the specified container               |
| `docker run -v [host directory]:[container directory] -it [image] /bin/bash` | run bash in new container (creates new container)      |
| `docker rename [container] [new name]`                                       | rename container                                       |
| `docker rm [container]`                                                      | delete container                                       |
| `docker build -t <image-name> <directory of Dockerfile>`                     | Build image from dockerfile                            |
| `docker run -it <image-name>`                                                | Interactively start docker image - e.g. spawn console  |
| `docker network inspect bridge`                                              | Show config for network bridge (bridge to host system) |

If docker desktop does not run under Ubuntu 24.04:
`sudo sysctl -w kernel.apparmor_restrict_unprivileged_userns=0`
