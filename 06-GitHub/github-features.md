
# 📘 GitHub — Features and Concepts

### Technical Writing Laboratory | MNIT Jaipur

> **Understand repositories. Collaborate through GitHub.**

This document explains the major features of GitHub and their role in version control, project management, and technical documentation.

---

## 🧩 1. GitHub Fundamentals

GitHub is a cloud-based platform that hosts Git repositories and provides collaboration and project management tools.

### Git vs GitHub

| Git | GitHub |
|---|---|
| Distributed version control system | Cloud-based Git hosting platform |
| Tracks changes locally | Hosts repositories online |
| Supports commits, branches, and merges | Supports pull requests, issues, and reviews |
| Can work offline | Online collaboration requires connectivity |

---

## 📁 2. Repositories

A repository contains project files and their Git history.

### Repository Visibility

| Type | Description |
|---|---|
| Public | Visible to everyone |
| Private | Accessible to authorized users |

### Common Repository Files

| File | Purpose |
|---|---|
| `README.md` | Project overview and documentation |
| `.gitignore` | Specifies intentionally untracked files |
| `LICENSE` | Defines permissions for using the project |
| `CONTRIBUTING.md` | Contribution guidelines |
| `CODE_OF_CONDUCT.md` | Community participation guidelines |

---

## 🔄 3. Commits and Branches

### Commits

A commit records a snapshot of staged changes in Git history.

A meaningful commit message explains the purpose of the modification.

Example:

```text
Add GitHub practical documentation
```

### Branches

Branches allow independent development without immediately modifying the default branch.

Example:

```text
main
 └── feature-documentation
```

---

## 🔀 4. Pull Requests

A pull request proposes changes from one branch to another.

### Pull Request Workflow

1. Create a feature branch.
2. Make and commit changes.
3. Open a pull request.
4. Review the differences.
5. Discuss or request modifications.
6. Merge approved changes.

### Pull Request Components

| Component | Purpose |
|---|---|
| Title | Summarizes proposed changes |
| Description | Explains the changes |
| Commits | Shows submitted revisions |
| Files changed | Displays differences |
| Reviews | Supports feedback and approval |
| Checks | Displays automated workflow results, if configured |

---

## 🐛 5. GitHub Issues

Issues are used to track tasks, bugs, and feature requests.

### Common Issue Components

- Title
- Description
- Labels
- Assignees
- Milestones
- Comments

### Example Issue

**Title:** Improve README navigation

**Description:** Add links to all Technical Writing modules and verify that the links point to the correct folders.

**Label:** documentation

---

## 📝 6. Markdown Documentation

Markdown is a lightweight markup language used to format text.

### Basic Markdown Syntax

| Element | Syntax |
|---|---|
| Heading | `# Heading` |
| Bold | `**Bold**` |
| Italic | `*Italic*` |
| Link | `[Title](URL)` |
| Inline code | `` `command` `` |
| Bullet list | `- Item` |
| Task list | `- [ ] Task` |

### Example README

```markdown
# My Project

## Overview

This repository contains technical documentation.

## Features

- Structured notes
- Practical exercises
- Screenshots

## Author

Ananya Siju
```
---

## 🔐 7. Repository Permissions

Repository access depends on visibility, ownership, and assigned roles.

For organization repositories, common roles include:

| Role | General Capability |
|---|---|
| Read | View repository content |
| Triage | Manage issues and pull requests without write access to code |
| Write | Push changes and manage project content |
| Maintain | Manage repository settings without certain destructive or sensitive permissions |
| Admin | Full repository administration |

**Note:** Permission options differ between personal and organization repositories.

---

## ⚙️ 8. GitHub Actions

GitHub Actions automates tasks through workflows.

Common uses:

- Running tests
- Checking code quality
- Building applications
- Deploying projects

Workflow definitions are stored in:

```text
.github/workflows/
```

GitHub Actions is an additional feature; configuring a workflow is not necessary for the basic GitHub practical.

---

## 🌐 9. Fork vs Clone

| Fork | Clone |
|---|---|
| Creates a repository copy under another GitHub account or namespace | Creates a local copy of a repository |
| Performed through GitHub | Usually performed using `git clone` |
| Useful for contributing to repositories | Useful for local development |

---

## 🎓 10. Important Viva Questions

### Q1. What is GitHub?

GitHub is a platform for hosting Git repositories and supporting collaborative development.

### Q2. What is a repository?

A repository stores project files and their version history.

### Q3. What is a pull request?

A pull request proposes changes from one branch to another for review and integration.

### Q4. What is an issue?

An issue is used to track tasks, bugs, or feature requests.

### Q5. What is the difference between Git and GitHub?

Git is a version control system; GitHub is a Git repository hosting and collaboration platform.

### Q6. What is Markdown?

Markdown is a lightweight markup language used to format plain-text documents.

### Q7. What is a fork?

A fork is a copy of a repository under another GitHub account or namespace.

### Q8. What is a clone?

A clone is a local copy of a Git repository.

### Q9. Why are branches useful?

Branches allow independent development and help isolate changes.

### Q10. What is GitHub Actions?

GitHub Actions is a workflow automation platform integrated with GitHub.

---

## 📚 References

- [GitHub Docs](https://docs.github.com/)
- [GitHub Skills](https://skills.github.com/)
- [GitHub Flavored Markdown](https://github.github.com/gfm/)

---

## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)
