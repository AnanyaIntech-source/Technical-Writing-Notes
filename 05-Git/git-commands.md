
# 🛠️ Git Commands — Concepts and Reference Guide

### Technical Writing Laboratory | MNIT Jaipur

> **Understand the workflow. Master the commands. Track every change.**

Git is a distributed version control system that records changes to files and helps developers manage project history.

This guide explains the essential Git commands, their syntax, practical applications, common errors, and important viva questions.

---

## 📑 Contents

1. Git Fundamentals
2. Git Architecture
3. Configuration Commands
4. Repository Commands
5. Staging and Committing
6. History and Comparison
7. Branching and Merging
8. Remote Repositories
9. Undo and Recovery
10. Troubleshooting
11. Viva Questions
12. References

---

## 🧩 1. Git Fundamentals

### What Is Version Control?

Version control is a system that tracks changes to files over time.

It helps developers:

- Maintain project history.
- Identify changes made to files.
- Restore previous versions.
- Collaborate with other developers.
- Work on separate features.

### Types of Version Control

| Type | Description | Example |
|---|---|---|
| Local | Stores revisions on one computer | RCS |
| Centralized | Stores project history on a central server | SVN |
| Distributed | Each clone contains repository history | Git |

### Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Repository hosting platform |
| Tracks changes locally | Hosts repositories online |
| Works without internet | Requires internet for online operations |
| Supports commits and branches | Adds pull requests and collaboration tools |

---

## 🔄 2. Git Architecture

Git uses three main areas:

| Area | Purpose |
|---|---|
| Working Directory | Files being edited |
| Staging Area | Changes selected for the next commit |
| Local Repository | Committed project history |

```text
Working Directory
       |
       | git add
       v
Staging Area
       |
       | git commit
       v
Local Repository
       |
       | git push
       v
Remote Repository
```

### Important Terminology

| Term | Meaning |
|---|---|
| Repository | Project tracked by Git |
| Commit | Recorded snapshot of staged changes |
| Branch | Independent line of development |
| HEAD | Reference to the current checkout |
| Index | Another name for the staging area |
| Remote | Named reference to another repository |
| Merge | Integration of changes from branches |
| Conflict | Situation requiring manual resolution of incompatible changes |

---

## ⚙️ 3. Configuration Commands

### Check Git Version

```bash
git --version
```

Displays the installed Git version.

### Configure Username

```bash
git config --global user.name "Your Name"
```

### Configure Email

```bash
git config --global user.email "your-email@example.com"
```

These values are used as author information for new commits.

### View Configuration

```bash
git config --global --list
```

### Check Individual Values

```bash
git config user.name
git config user.email
```

**Note:** Local repository configuration can override global configuration.

---

## 📁 4. Repository Commands

### Initialize a Repository

```bash
git init
```

Creates a Git repository in the current directory.

### Check Repository Status

```bash
git status
```

Shows the current branch and the state of tracked, modified, staged, and untracked files.

### Clone a Repository

```bash
git clone <repository-url>
```

Creates a local copy of an existing repository.

### List Tracked Files

```bash
git ls-files
```

Displays files tracked by Git.

---

## 📌 5. Staging and Committing

### Add a Specific File

```bash
git add README.md
```

Stages changes to the specified file.

### Stage All Changes

```bash
git add .
```

Stages additions, modifications, and deletions under the current directory.

### Create a Commit

```bash
git commit -m "Add project documentation"
```

Records staged changes as a new commit.

### Check Staged Changes

```bash
git diff --staged
```

Displays differences between the staging area and the current commit.

### Example Workflow

```bash
git status
git add README.md
git diff --staged
git commit -m "Update README"
git status
```

**Remember:** `git add` stages changes, while `git commit` records them in repository history.

---

## 🔍 6. History and Comparison

### View Commit History

```bash
git log
```

### Compact Commit History

```bash
git log --oneline
```

### Graphical Commit History

```bash
git log --oneline --graph --all
```

### View Unstaged Changes

```bash
git diff
```

### View Staged Changes

```bash
git diff --staged
```

### Inspect a Commit

```bash
git show HEAD
```

Displays information and changes associated with the current commit.

### Show Recent Commits

```bash
git log -5 --oneline
```

Displays up to five recent commits.

## 🌿 7. Branching and Merging

### List Local Branches

```bash
git branch
```

### Create a Branch

```bash
git branch feature-docs
```

### Switch Branches

```bash
git switch feature-docs
```

### Create and Switch Together

```bash
git switch -c feature-docs
```

### Merge a Branch

```bash
git merge feature-docs
```

Merges the named branch into the currently checked-out branch.

### Delete a Merged Branch

```bash
git branch -d feature-docs
```

### Branching Example

```bash
git switch -c feature-docs
echo "Branching demonstration" >> README.md
git add README.md
git commit -m "Demonstrate branching"

git switch -
git merge feature-docs
```

### Merge Conflicts

A merge conflict may occur when Git cannot automatically combine incompatible changes.

Basic resolution:

1. Open the conflicted file.
2. Locate conflict markers.
3. Edit the file to retain the intended content.
4. Remove conflict markers.
5. Stage the resolved file.
6. Complete the merge.

```bash
git status
git add README.md
git commit
```

**Note:** The final `git commit` applies when a merge is paused for conflict resolution.

---

## 🌐 8. Remote Repositories

### List Remotes

```bash
git remote -v
```

### Add a Remote

```bash
git remote add origin <repository-url>
```

### Fetch Updates

```bash
git fetch origin
```

Downloads remote objects and updates remote-tracking references without automatically integrating changes into the current branch.

### Pull Updates

```bash
git pull
```

Fetches and integrates updates from the configured upstream branch.

### Push Commits

```bash
git push
```

Uploads local commits to the configured remote branch.

### First Push

```bash
git push -u origin main
```

Pushes the local `main` branch and sets its upstream tracking branch.

### Fetch vs Pull vs Push

| Command | Purpose |
|---|---|
| `git fetch` | Download remote updates |
| `git pull` | Fetch and integrate updates |
| `git push` | Upload local commits |

**Important:** Pushing requires appropriate authentication and repository permissions.

---

## ↩️ 9. Undo and Recovery

### Unstage a File

```bash
git restore --staged README.md
```

Removes the file's staged changes without discarding working-directory edits.

### Discard Unstaged Changes

```bash
git restore README.md
```

Restores the working file from the index.

**Warning:** This can permanently discard uncommitted changes.

### Revert a Commit

```bash
git revert HEAD
```

Creates a new commit that reverses the changes introduced by the specified commit, when the revert can be applied successfully.

### Amend the Latest Commit

```bash
git commit --amend
```

Updates the latest commit using the current staging area and/or a revised message.

**Warning:** Amending changes commit history. Avoid rewriting shared commits without coordination.

### Reset to a Commit

```bash
git reset --soft HEAD~1
```

Moves the current branch back one commit while retaining changes in the staging area.

**Note:** This example requires at least two commits on the current branch.

---

## 🚨 10. Common Errors and Troubleshooting

| Problem | Possible Cause | Solution |
|---|---|---|
| `git: command not found` | Git unavailable in PATH | Install Git or fix PATH |
| `not a git repository` | Command run outside repository | Navigate to repository or run `git init` |
| `nothing to commit` | No staged changes | Modify and stage a file |
| `Author identity unknown` | Name or email not configured | Set `user.name` and `user.email` |
| Push rejected | Remote has changes not integrated locally | Fetch and integrate changes before pushing |
| Authentication failed | Invalid or missing credentials | Configure supported GitHub authentication |
| Merge conflict | Incompatible branch changes | Resolve conflict, stage, and complete merge |
| `remote origin already exists` | Remote name already configured | Inspect with `git remote -v` |

---

## 🎓 11. Important Viva Questions

### Q1. What is Git?

Git is a distributed version control system used to track file changes and manage project history.

### Q2. What is the difference between Git and GitHub?

Git is a version control tool, whereas GitHub is a platform that hosts Git repositories.

### Q3. What is the staging area?

The staging area stores changes selected for the next commit.

### Q4. What is a commit?

A commit is a recorded snapshot of staged project changes.

### Q5. What is the difference between `git add` and `git commit`?

`git add` stages changes; `git commit` records staged changes in repository history.

### Q6. What is a branch?

A branch is an independent line of development represented by a movable reference to a commit.

### Q7. What does `git merge` do?

It integrates changes from another branch into the current branch.

### Q8. What is a merge conflict?

A merge conflict occurs when Git cannot automatically reconcile certain changes.

### Q9. What is the difference between `git fetch` and `git pull`?

`git fetch` downloads remote updates, while `git pull` fetches and integrates them.

### Q10. What does `git status` display?

It displays the working tree and staging area status, along with branch information.

### Q11. What is HEAD?

HEAD identifies the current checkout, normally through a symbolic reference to the current branch.

### Q12. Why is Git called distributed?

Because a clone generally contains the repository's commit history, allowing local version control operations without continuous server access.

---

## 📚 12. References

- [Git Official Website](https://git-scm.com/)
- [Pro Git Book](https://git-scm.com/book/en/v2)
- [Git Command Reference](https://git-scm.com/docs)
- [GitHub Documentation](https://docs.github.com/)

---

## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)

