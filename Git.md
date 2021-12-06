# Cheat Sheet Git

Command | Description
:--- | :---
`git reset --hard origin/[branch name]` | resets local files to the state on origin, **deletes any local changes**
`git rm --cached [File]` | delete file on origin but not local (untrack file)
`git checkout --patch [Branch] [File]`| merge only one file
`git config --list`| show git settings
`git checkout HEAD~1 [path/to/file]` | checkout file from commit before head
`git branch -m [old name] [new name]` | rename branch
`git push origin --delete [Branch Name]` | delete remote branch
`git config --global core.editor "vim"` | change git editor
`git cherry-pick [commit]` | put a commit from another branch on top of your history 


