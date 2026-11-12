
# 🌿 Git — Version Control System

### Technical Writing Laboratory | MNIT Jaipur

> **Track changes. Manage versions. Develop confidently.**

Git is a distributed version control system used to track changes in files, maintain project history, and support collaborative software development.

This module demonstrates the fundamentals of Git, including repository initialization, staging, committing, branching, merging, and working with remote repositories.

---

## 🔗 About Git

Git is a free, open-source distributed version control system originally developed by Linus Torvalds in 2005.

It allows developers to maintain a complete history of their projects, work on independent branches, and integrate changes efficiently.

Git is widely used for:

- Source code management
- Version tracking and revision history
- Collaborative software development
- Branching and merging
- Project documentation
- Maintaining reproducible project versions

**Git vs GitHub:** Git is the version control system, while GitHub is a platform for hosting Git repositories and supporting collaboration.

---

## 🎯 Objectives

- Understand the fundamentals of version control.
- Learn the architecture and workflow of Git.
- Initialize and configure a local Git repository.
- Track file changes using staging and commits.
- Inspect repository status and commit history.
- Create, switch, and merge branches.
- Understand local and remote repositories.
- Demonstrate essential Git commands through practical exercises.
- Document Git operations using Markdown and screenshots.

---

## 📁 Repository Contents

| File / Folder | Purpose |
|---|---|
| [`git-commands.md`](git-commands.md) | Detailed Git concepts, commands, syntax, examples, and viva questions |
| [`practical-exercises.md`](practical-exercises.md) | Step-by-step Git practical exercises |
| [`screenshots/`](screenshots/) | Screenshots demonstrating Git commands and their outputs |

---

## 📂 Folder Structure

```text
05-Git/
├── README.md
├── git-commands.md
├── practical-exercises.md
└── screenshots/
    ├── 01-git-version.png
    ├── 02-git-init-status.png
    ├── 03-git-add-commit.png
    ├── 04-git-log.png
    ├── 05-git-branch-merge.png
    └── 06-git-remote-push.png
```
---

## 🧩 Key Concepts

### 1. Version Control

Version control is a system that records changes made to files over time.

It allows developers to:

- Track modifications
- Review previous versions
- Restore earlier project states
- Coordinate changes across contributors

### 2. Git Architecture

Git primarily operates through three areas:

| Area | Description |
|---|---|
| Working Directory | Contains files being created or modified |
| Staging Area (Index) | Holds changes selected for the next commit |
| Local Repository | Stores committed project history |

### 🔄 Git Workflow

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

**Important:** `git push` transfers local commits to a remote repository. It is not required for ordinary local commits.

### 3. Git Repository

A Git repository stores version history and metadata associated with a project.

Repositories can be:

- **Local:** Stored on the user's computer.
- **Remote:** Hosted on a server or platform such as GitHub.

### 4. Commits

A commit records a snapshot of staged changes in the repository history.

Each commit has a unique identifier and typically includes:

- Commit message
- Author information
- Timestamp
- Reference to its parent commit(s)

### 5. Branching and Merging

A branch represents an independent line of development.

Branching allows developers to work on features or fixes without immediately modifying another branch.

Merging integrates changes from one branch into another.

### 6. Remote Repositories

Remote repositories enable developers to exchange commits and collaborate across different systems.

Common operations include:

- `git clone` — Copy an existing repository.
- `git fetch` — Download remote updates without merging them.
- `git pull` — Fetch and integrate remote updates.
- `git push` — Upload local commits to a remote repository.

---

## 🛠️ Tools Used

| Tool | Purpose |
|---|---|
| Git | Distributed version control |
| Git Bash / Terminal | Execute Git commands |
| Visual Studio Code | Edit and manage project files |
| GitHub | Host and share repositories |
| Markdown | Document commands and practical exercises |

---

## 💻 Practical Implementation

### 1. Verify Git Installation

Open Git Bash or a terminal and execute:

```bash
git --version
```

This displays the installed Git version.

### 2. Configure Git

Set the name and email associated with your commits:

```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
```

Verify the configuration:

```bash
git config --global --list
```

### 3. Initialize a Repository

Create a practice directory and initialize Git:

```bash
mkdir git-practice
cd git-practice
git init
```

Check repository status:

```bash
git status
```

### 4. Create and Track a File

Create a Markdown file:

```bash
echo "# Git Practice" > README.md
```

Stage the file:

```bash
git add README.md
```

Commit the staged changes:

```bash
git commit -m "Initial commit"
```

### 5. Inspect Commit History

View the commit history:

```bash
git log --oneline
```

Inspect changes to tracked files:

```bash
git diff
```

**Note:** `git diff` normally displays unstaged changes. Use `git diff --staged` to inspect staged changes.

### 6. Create and Merge a Branch

Create and switch to a new branch:

```bash
git switch -c feature-docs
```

Modify the README:

```bash
echo "Learning Git branching." >> README.md
```

Stage and commit:

```bash
git add README.md
git commit -m "Add branching documentation"
```

Switch back to the original branch and merge:

```bash
git switch -
git merge feature-docs
```

**Note:** `git switch -` returns to the previously checked-out branch. The merge may be a fast-forward if no divergent commits exist.

### 7. Work with GitHub

After creating an empty GitHub repository, connect it to the local repository:

```bash
git remote add origin <repository-url>
```

Rename the current branch to `main` if required:

```bash
git branch -M main
```

Push the branch:

```bash
git push -u origin main
```

Replace `<repository-url>` with the actual GitHub repository URL.

**Note:** Remote authentication and write permissions are required. For an existing remote repository, cloning it may be preferable to initializing a separate repository.

---

## 📸 Practical Screenshots

Capture screenshots of the following operations:

| Screenshot | Commands / Evidence |
|---|---|
| `01-git-version.png` | `git --version` |
| `02-git-init-status.png` | `git init`, `git status` |
| `03-git-add-commit.png` | `git add`, `git commit` |
| `04-git-log.png` | `git log --oneline` |
| `05-git-branch-merge.png` | `git branch`, `git switch`, `git merge` |
| `06-git-remote-push.png` | `git remote -v`, `git push` |

Store the screenshots inside the `screenshots/` folder.

For additional demonstrations, refer to [`practical-exercises.md`](practical-exercises.md).

---

## 🔎 Practical Observations

- Git maintains a history of committed changes.
- The staging area allows selective inclusion of changes in commits.
- Commit messages help identify the purpose of revisions.
- Branches support independent development.
- Merging integrates changes between branches.
- Remote repositories support backup and collaboration.
- Git commands can be executed directly through the terminal.

---

## 🎓 Learning Outcomes

After completing this module, a student should be able to initialize and configure Git repositories, track file changes, create commits, inspect project history, manage branches, and synchronize local work with remote repositories.

The practical also demonstrates how Git supports reliable version control and documentation management in software development.

---

## 📚 References

- [Git — Official Website](https://git-scm.com/)
- [Pro Git Book](https://git-scm.com/book/en/v2)
- [Git Reference Manual](https://git-scm.com/docs)
- [GitHub Documentation](https://docs.github.com/)

---

## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)

