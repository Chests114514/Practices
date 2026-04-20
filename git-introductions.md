# Git Introductions

## 1.General Settings

### 1.1 Account Settings
`git config --global user.name "(Your name)"`  
    set username  
`git config --global user.email "(Your email)"`  
    set email  
`git config --list`  
    output configure list  

### 1.2 General Configures
`git config --global init.defaultBranch main`  
    set default branch name  
`git config --global core.editor vim`  
    set default text editor  

## 2.Repo Manage

### 2.1 Repo Manage
`git init (optional: repo name)`  
    initialize repo  
`git clone (repo position) (optional: target directory)`  
    clone repo to ./ (or target directory)  
`git clone git@github.com:(Username)/(Reponame).git`  
    clone repo to ./ (SSH format)  
`git clone https://github.com/(Username)/(Reponame).git`  
    clone repo to ./ (HTML format)  

### 2.2 Remote Repo
`git remote -v`  
    check remote repo  
`git remote add origin (repo address)`  
    add remote repo  
`git remote set-url origin (new address)`  
    change remote repo address  
`git remote remove origin`  
    delete remote repo  
`git remote show origin`  
    show remote repo detailed information  

## 3.Basic Operations

### 3.1 Status 
`git status`  
    check file status  
`git diff`  
    check changed contents (work -- temporary)  
`git diff --staged`  
    check changed contents (temporary -- local)  
`git diff HEAD`  
    check changed contents (work -- local)  

### 3.2 Add & Submit
`git add (file)`  
    add a specified file (Regular expressions are supported)  
`git add -A`  
    add all files (include deleted)  
`git commit -m "(comments)"`  
    submit and add comments  

### 2.3 Rollback
`git reset HEAD (file)`  
    rollback a specified file (after `git add`)  
`git checkout -- (file)`  
    rollback to last submitted status (before `git add`)  
`git reset --soft HEAD~1`  
    cancel submit, keep the changes in temporary  
`git reset --mixed HEAD~1`  
    cancel submit, keep the changed in work  
`git reset --hard HEAD~1`  
    totally rollback to last version  

## 4.Branch Manage

### 4.1 Branch Basics
`git branch`  
    check local branches  
`git branch -r`  
    check remote branches  
`git branch -a`  
    check all branches  
`git branch (new branch)`  
    add a new branch  
`git checkout -b (new branch)`  
    add a new branch and change to it  
`git checkout (branch)`  
    switch to another branch  
`git branch -d (branch)`  
    delete merged branch  
`git branch -D (branch)`  
    force delete branch  

### 4.2 Branch Merge
`git merge (branch name)`  
    merge current branch with a specified branch  
`git merge --abort`  
    abort merge  
`git rebase (branch name)`  
    re-base branch  
`git rebase --abort`  
    abort re-base  

## 5.History

### 5.1 Log Output
`git log`  
    output full log  
`git log --oneline`  
    output log in 1 line  
`git log --graph`  
    output log in graph  
`git log -n 5`  
    output 5 lines of newest log  
`git log --follow (file name)`  
    check file change history  
`git log -p (file name)`  
    check file change history (detailed)  

### 5.2 Check Differences
`git diff (commit1) (commit2)`  
    check differences between two commits  
`git show (commit-id)`  
    check a specified commit changes  
`git show (commit-id) (file name)`  
    check a specified commit changes a specified file  

## 6.Remote Synchronous

### 6.1 Remote Synchronous
`git pull`  
    pull code and merge  
`git pull --rebase`  
    pull code and re-base  
`git fetch`  
    only pull, no merge  
`git push origin (branch)`  
    push to server  
`git push -u origin (branch)`  
    set upstream and push  
`git push origin --delete (branch)`  
`git push --force`  
    force push *(CAREFUL!)*  
`git push -f`  
    force push *(CAREFUL!)*  

### 6.2 Synchronous Strategy
`git stash`  
    safety pull (protect local change)  
`git stash pop`  
    safety pull (protect local change)  
`git fetch origin`  
    discard local change, force synchronous server  

## 7.Temporary Save and Clean

### 7.1 Temporary Change
`git stash`  
    temporary save changes  
`git stash save (manual)`  
    temporary save changes with manual  
`git stash list`  
    check temporary list  
`git stash pop`  
    restore and delete temporary  
`git stash apply`  
    restore but save temporary  
`git stash drop`  
    delete newest temporary  
`git stash clear`  
    delete all temporary  

### 7.2 Clear Files
`git clean -n`  
    preview the file that going to delete  
`git clean -f`  
    delete untracked file  
`git clean -fd`  
    delete untracked file and directory  
`git clean -fx`  
    delete untracked file (include files in .gitignore)  

## 8.Tag Manage

### 8.1 Tag Manage
`git tag (tag name)`  
    create a light tag  
`git tag -a (tag name) -m "(comment)"`  
    create a tag with comment  
`git tag -a (tag name) (commit-id)`  
    tag history commits  
`git tag`  
    list all of the tag  
`git show (tag name)`  
    check tag details  
`git push origin (tag name)`  
    push specified tag  
`git push origin --tags`  
    push all of the tags  
`git tag -d (tag name)`  
    delete local tag  
`git push origin --delete (tag name)`  
    delete remote tag  

## 9.Debugging and Diagnosis

### 9.1 Debugging and Diagnosis
`git reflog`  
    check all of the contributions log  
`git blame (file name)`  
    check author of every line of code  

## 10.Common Workflows

### 10.1 Daily Workflows
*Start to Work*  
`git checkout main`  
`git pull`  
`git checkout -b feature/example`  
*Working*  
`git add .`  
`git commit -m "example"`  
*Finish Feature*  
`git add .`  
`git commit -m "example"`  
`git push origin feature/example`  
*Merge to Main Branch*  
`git checkout main`  
`git pull`  
`git merge feature/example`  
`git push`  
`git branch -d feature/example`  

### 10.2 Emergency Fix Workflows
*Make a Fix Branch From Main Branch*
`git checkout main`  
`git pull`  
`git checkout -b hotfix/bug`  
*Fix and Push*  
`git add .`  
`git commit -m "fix: example"`  
`git push origin hotfix/bug`  
*Merge to Main Branch*  
`git checkout main`  
`git merge hotfix/bug`  
`git push`  

### 10.3 Multi-Person Collaboration Workflows
*Start to Collab*  
`git checkout main`  
`git pull`  
`git checkout -b feature/collabexample`  
*Regular Synchronization*  
`git add .`  
`git commit -m "work progress"`  
`git pull origin main --rebase`  
*Resolving Conflicts*  
`git push origin feature/collabexample`  
