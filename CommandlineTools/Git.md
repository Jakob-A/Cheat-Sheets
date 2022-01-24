# Cheat Sheet Git

## General Commands

Command | Description
:--- | :---
`git reset --hard origin/[branch name]`     | resets local files to the state on origin, **deletes any local changes**
`git rm --cached [File]`                    | delete file on origin but not local (untrack file)
`git checkout --patch [Branch] [File]`      | merge only one file
`git checkout HEAD~1 [path/to/file]`        | checkout file from commit before head
`git branch -m [old name] [new name]`       | rename branch
`git push origin --delete [Branch Name]`    | delete remote branch
`git cherry-pick [commit]`                  | put a commit from another branch on top of your history
`git log --grep='search for'`               | search through commit messages
`git pull -r origin [Branch]`               | update source branch of current branch, if *x* was branched from *main* and *main* was updated afterwards these updates will be loaded below the commits made on *x*
`git rebase -i [commit id]`                 | look interactive on the commits till `commit id`, the order can be changed for example, go back x commits from HEAD with `HEAD~[x]`
`git stash drop`                            | delete stashed changes
`git checkout -- [file]`                    | reset changes in a single file

## Clone Repo into existing folder

1. `cd [folder]`
2. `git init`
3. `vim .gitignore` + `git add .` + `git commit`
4. `git remote add origin [Web Address]`
5. `git pull origin` (add `----allow-unrelated-histories`, if the upstream repo isn't empty)

## Config

[Link to Git Wiki](https://www.git-scm.com/book/en/v2/Customizing-Git-Git-Configuration)

Command                                 | Description
:---                                    | :---
`git config --list`                     | show git settings
`git config --global core.editor "vim"` | change git editor
`git config --global core.excludesfile ~/.gitignore_global` | set global gitignore file
