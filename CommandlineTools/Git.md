## General Commands

Command | Description
:--- | :---
`git reset --hard origin/[branch name]`     | resets local files to the state on origin, **deletes any local changes**
`git rm --cached [File]`                    | delete file on origin but not local (untrack file)
`git checkout --patch [Branch] [File]`      | merge only one file
`git checkout HEAD~1 [path/to/file]`        | checkout file from commit before head, **reset one file**
`git branch -m [old name] [new name]`       | rename branch
`git branch -d [Branch Name]` | delete local branch
`git branch -f [Branch Name] [Commit Hash]` | move branch pointer to another commit
`git branch` | list all local branches
`git push origin --delete [Branch Name]`    | delete remote branch
`git cherry-pick [commit]`                  | put a commit from another branch on top of your history
`git log --grep='search for'`               | search through commit messages
`git pull -r origin [Branch]`               | update source branch of current branch, if *x* was branched from *main* and *main* was updated afterwards these updates will be loaded below the commits made on *x*
`git rebase -i [commit id]`                 | look interactive on the commits till `commit id`, the order can be changed for example, go back x commits from HEAD with `HEAD~[x]`
`git stash drop`                            | delete stashed changes
`git checkout -- [file]`                    | reset changes in a single file
`git add --patch [file]`                    | Add part of a file


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
`git config --list --show-origin` | shows git settings with origin file
`git config --global core.editor "vim"` | change git editor
`git config --global core.excludesfile ~/.gitignore_global` | set global gitignore file


## Submodules

Command                                                 | Description
:---                                                    | :---
`git submodule add <remote_url> <destination_folder>`   | adds a submodule to the specified folder
`git submodule update --init --recursive`               | download submodule
`git submodule deinit -f -all` | remove all submodules -> afterwards they can be reinitialised

### Change Branch of git submodule
1. Edit/Add the `branch` configuration of the sub module in the `.gitmodules` file
2. `git submodule sync`
3. `git submodule update --init --remote`
