## Git Introductions

[ Account Settings ]
`git config --global user.name "(Your name)"`
    set username
`git config --global user.email "(Your email)"`
    set email
`git config --list`
    output configure list

[ General Configures ]
`git config --global init.defaultBranch main`
    set default branch name
`git config --global core.editor vim`
    set default text editor

[ Repo Manage ]
`git init (optional: repo name)`
    initialize repo
`git clone (repo position) (optional: target directory)`
    clone repo to ./ (or target directory)
`git clone git@github.com:(Username)/(Reponame).git`
    clone repo to ./ (SSH format)
`git clone https://github.com/(Username)/(Reponame).git`
    clone repo to ./ (HTML format)

[ Remote Repo ]
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

[ Status ]
`git status`
    check file status
`git diff`
    check changed contents (work -- temporary)
`git diff --staged`
    check changed contents (temporary -- local)
`git diff HEAD`
    check changed contents (work -- local)

[ Add & Submit ]
`git add (file)`
    add a specified file (Regular expressions are supported)
`git add -A`
    add all files (include deleted)
`git commit -m "(comments)"`
    submit and add comments

[ Rollback ]
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


[ Branch ]
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
