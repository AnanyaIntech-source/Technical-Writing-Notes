
# 📘 Beamer — Detailed Notes and Command Reference

> **Create structured, professional presentations using LaTeX.**

Comprehensive notes on Beamer concepts, presentation structure, themes, commands, overlays, practical examples, compilation, and troubleshooting covered in the Technical Writing laboratory.

## 📑 Table of Contents

1. [Introduction to Beamer](#1-introduction-to-beamer)
2. [Prerequisites](#2-prerequisites)
3. [Basic Presentation Structure](#3-basic-presentation-structure)
4. [Frames and Sections](#4-frames-and-sections)
5. [Themes and Customization](#5-themes-and-customization)
6. [Lists](#6-lists)
7. [Blocks](#7-blocks)
8. [Overlays and Transitions](#8-overlays-and-transitions)
9. [Mathematical Expressions](#9-mathematical-expressions)
10. [Tables](#10-tables)
11. [Columns](#11-columns)
12. [Figures and Images](#12-figures-and-images)
13. [Useful Commands](#13-useful-commands)
14. [Compilation](#14-compilation)
15. [Common Errors and Troubleshooting](#15-common-errors-and-troubleshooting)
16. [Advantages and Limitations](#16-advantages-and-limitations)
17. [Quick Viva Questions](#17-quick-viva-questions)
18. [Practical Checklist](#18-practical-checklist)
19. [References](#19-references)

---

## 1. Introduction to Beamer

Beamer is a **LaTeX document class** used to create professional presentation slides, typically exported as PDF documents.

Unlike conventional presentation software, Beamer uses plain-text source files containing LaTeX commands to define slide content, structure, and formatting.

### 📌 Key Features

- Consistent slide formatting using predefined themes.
- Support for mathematical equations and scientific notation.
- Structured presentations using frames and sections.
- Progressive content display through overlays.
- Integration with tables, figures, and diagrams.
- Git-friendly source files for version control and collaboration.

**Important:** Beamer is not a separate programming language. It is a document class within the LaTeX ecosystem.

---

## 2. Prerequisites

Before working with Beamer, the following are recommended:

| Requirement | Purpose |
|---|---|
| Basic LaTeX knowledge | Understanding commands, environments, and syntax |
| TeX Live / MiKTeX | Local LaTeX compilation |
| Overleaf | Online editing and compilation |
| Text Editor | Writing and modifying `.tex` files |
| PDF Viewer | Viewing generated presentations |

**Note:** Overleaf provides an online LaTeX environment, so a local installation is not required when using it.

---

## 3. Basic Presentation Structure

A Beamer presentation contains a preamble, presentation metadata, and frames.

### 💻 Basic Example

```latex
\documentclass[aspectratio=169]{beamer}

\usetheme{Madrid}

\title{Presentation Title}
\author{Author Name}
\institute{Institution}
\date{\today}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{First Slide}
    Content goes here.
\end{frame}

\end{document}
```

### 🔍 Command Explanation

| Command | Purpose |
|---|---|
| `\documentclass{beamer}` | Selects the Beamer document class |
| `aspectratio=169` | Sets the slide aspect ratio to 16:9 |
| `\usetheme{Madrid}` | Applies the Madrid presentation theme |
| `\title{}` | Defines the presentation title |
| `\author{}` | Defines the author |
| `\institute{}` | Specifies the institution |
| `\date{\today}` | Displays the compilation date |
| `\begin{frame}` | Begins a frame |
| `\titlepage` | Generates the title slide |
| `\end{document}` | Ends the presentation |

---

## 4. Frames and Sections

Frames represent the main units of content in a Beamer presentation.

### 🖥️ Creating a Frame

```latex
\begin{frame}{Overview}
    This is the content of the slide.
\end{frame}
```

### 📑 Organizing Sections

```latex
\section{Introduction}

\begin{frame}{Overview}
    Introduction to the topic.
\end{frame}
```

### 📋 Table of Contents

```latex
\begin{frame}{Outline}
    \tableofcontents
\end{frame}
```

### 🔍 Important Commands

| Command | Purpose |
|---|---|
| `\begin{frame}` | Begins a frame |
| `\end{frame}` | Ends a frame |
| `\frametitle{}` | Sets the frame title |
| `\section{}` | Organizes presentation sections |
| `\subsection{}` | Creates subsections |
| `\tableofcontents` | Displays the presentation outline |

**Important:** A frame usually represents one logical slide, but overlays may generate multiple PDF pages from a single frame.

---

## 5. Themes and Customization

Beamer provides predefined themes that control the appearance of presentations.

### 🎨 Theme Commands

| Command | Purpose |
|---|---|
| `\usetheme{Madrid}` | Applies the Madrid theme |
| `\usetheme{Boadilla}` | Applies the Boadilla theme |
| `\usecolortheme{default}` | Uses the default color theme |
| `\setbeamertemplate{navigation symbols}{}` | Hides navigation icons |

### 💻 Example

```latex
\usetheme{Madrid}
\usecolortheme{default}

\setbeamertemplate{navigation symbols}{}
```

**Note:** Theme commands are generally placed in the preamble before `\begin{document}`.

---

## 6. Lists

Beamer supports ordered and unordered lists using standard LaTeX environments.

### 🔹 Unordered List

```latex
\begin{itemize}
    \item First bullet
    \item Second bullet
\end{itemize}
```

### 🔢 Ordered List

```latex
\begin{enumerate}
    \item First step
    \item Second step
\end{enumerate}
```

### 🔍 Comparison

| Environment | Purpose | Output |
|---|---|---|
| `itemize` | Unordered list | Bullet points |
| `enumerate` | Ordered list | Numbered items |

Each list entry begins with `\item`.

---

## 7. Blocks

Beamer provides special environments for highlighting important content.

### 📦 Standard Block

```latex
\begin{block}{Definition}
    Standard highlighted content.
\end{block}
```

### ⚠️ Alert Block

```latex
\begin{alertblock}{Warning}
    Important information.
\end{alertblock}
```

### 💡 Example Block

```latex
\begin{exampleblock}{Example}
    Illustrative content.
\end{exampleblock}
```

### 🔍 Block Comparison

| Environment | Purpose |
|---|---|
| `block` | General highlighted information |
| `alertblock` | Warnings or important points |
| `exampleblock` | Examples and demonstrations |

The appearance of each block depends on the selected Beamer theme.

---

## 8. Overlays and Transitions

Overlays allow content to appear progressively across successive versions of a frame.

### 💻 Progressive Reveal Example

```latex
\begin{frame}{Progressive Reveal}
    \begin{itemize}
        \item<1-> Appears first
        \item<2-> Appears second
        \item<3-> Appears third
    \end{itemize}
\end{frame}
```

### 🔍 Overlay Syntax

| Syntax | Meaning |
|---|---|
| `<1->` | Visible from overlay 1 onward |
| `<2->` | Visible from overlay 2 onward |
| `<3->` | Visible from overlay 3 onward |
| `\pause` | Introduces a progressive reveal point |

### 💻 Using `\pause`

```latex
\begin{frame}{Step-by-Step}
    First point.

    \pause

    Second point.

    \pause

    Third point.
\end{frame}
```

**Important:** Overlays are not the same as PowerPoint animations. They typically produce multiple PDF pages representing different stages of the same frame.

---

## 9. Mathematical Expressions

Beamer supports LaTeX mathematical notation.

### 🔹 Inline Mathematics

```latex
The equation is $a^2+b^2=c^2$.
```

### 🔹 Display Mathematics

```latex
\[
x = \frac{-b \pm \sqrt{b^2-4ac}}{2a}
\]
```

### 📐 Numbered Equation

```latex
\begin{equation}
    E = mc^2
\end{equation}
```

The `amsmath` package provides additional mathematical environments and commands.

**Note:** Beamer commonly loads `amsmath` through its dependencies, but explicitly declaring it can make package requirements clearer.

---

## 10. Tables

Tables organize data into rows and columns.

### 💻 Example

```latex
\begin{tabular}{ll}
\hline
Topic & Tool \\
\hline
Documents & LaTeX \\
Slides & Beamer \\
\hline
\end{tabular}
```

### 🔍 Table Syntax

| Symbol / Command | Purpose |
|---|---|
| `l` | Left-aligned column |
| `c` | Center-aligned column |
| `r` | Right-aligned column |
| `&` | Separates columns |
| `\\` | Ends a table row |
| `\hline` | Draws a horizontal line |
| `tabular` | Creates the table structure |

**Important:** Tables should be sized appropriately to fit within the slide boundaries.

---

## 11. Columns

Beamer provides a `columns` environment for arranging content side by side.

### 💻 Two-Column Layout

```latex
\begin{columns}

    \begin{column}{0.48\textwidth}
        Left content
    \end{column}

    \begin{column}{0.48\textwidth}
        Right content
    \end{column}

\end{columns}
```

### 🔍 Explanation

- `columns` creates a multi-column layout.
- `column` defines an individual column.
- `0.48\textwidth` specifies the width of each column.
- The remaining space allows separation between columns.

**Use Case:** Comparing concepts, displaying text beside diagrams, or organizing related information.

---

## 12. Figures and Images

Beamer supports external images using the `graphicx` package.

### 🖼️ Import Package

Place the following in the preamble:

```latex
\usepackage{graphicx}
```

### 💻 Insert an Image

Inside a frame:

```latex
\begin{frame}{Example Figure}
    \centering

    \includegraphics[width=0.6\textwidth]{figure.png}
\end{frame}
```

### 🔍 Explanation

| Command | Purpose |
|---|---|
| `\includegraphics{}` | Inserts an image |
| `width=0.6\textwidth` | Sets the image width |
| `\centering` | Centers the image |

**Important:** The referenced image must exist in the project or at the specified relative path.

---

## 13. Useful Commands

### 📘 Quick Command Reference

| Command | Explanation |
|---|---|
| `\documentclass{beamer}` | Selects the Beamer document class |
| `\begin{frame}` | Begins a frame |
| `\frametitle{}` | Sets the frame title |
| `\titlepage` | Generates the title slide |
| `\tableofcontents` | Displays the section outline |
| `\section{}` | Creates a presentation section |
| `\pause` | Introduces an overlay break |
| `\alert{}` | Emphasizes text |
| `\includegraphics{}` | Inserts an image |
| `\begin{columns}` | Creates a multi-column layout |

---

## 14. Compilation

Beamer presentations are compiled from `.tex` source files into PDF documents.

### 🛠️ Compilation Commands

From the repository root:

```bash
cd 02-Beamer/examples

pdflatex -interaction=nonstopmode -halt-on-error presentation.tex

pdflatex -interaction=nonstopmode -halt-on-error presentation.tex
```

The generated PDF will appear inside `examples/`.

Move or copy the final PDF to `02-Beamer/output/` when updating the repository's sample output.

### 🔄 Compilation Process

1. Write or modify the `.tex` source.
2. Select the desired theme and layout.
3. Run the LaTeX compiler.
4. Compile again to update navigation and references.
5. Review the generated PDF.

### 📂 Generated Files

| File | Purpose |
|---|---|
| `.tex` | Presentation source |
| `.pdf` | Compiled presentation |
| `.aux` | Auxiliary reference information |
| `.log` | Compilation messages |
| `.nav` | Beamer navigation data |
| `.snm` | Slide and navigation metadata |
| `.toc` | Table-of-contents information |

**Note:** Auxiliary files should generally be excluded from Git using `.gitignore`.

---

## 15. Common Errors and Troubleshooting

### ⚠️ Compilation Errors

| Error | Likely Cause | Solution |
|---|---|---|
| `File beamer.cls not found` | Beamer package missing | Install Beamer or use Overleaf |
| `Undefined control sequence` | Incorrect command or missing package | Check syntax and package imports |
| `File ... not found` | Incorrect image path | Verify filename and path |
| `Runaway argument` | Missing closing brace or delimiter | Check braces and command arguments |
| Overfull box warning | Content exceeds slide boundaries | Reduce content or divide into frames |

### 🔧 Troubleshooting Checklist

- Check that each `\begin{frame}` has a matching `\end{frame}`.
- Verify package declarations.
- Confirm image paths.
- Check braces and command spelling.
- Reduce overcrowded slide content.
- Compile again if navigation or references are outdated.
- Inspect the `.log` file for detailed errors.

---

## 16. Advantages and Limitations

### 🔍 Comparison

| Advantages | Limitations |
|---|---|
| Consistent slide formatting | Initial learning curve |
| Professional mathematical notation | Requires compilation |
| Reusable presentation themes | Less convenient manual positioning |
| Plain-text collaboration | Advanced layouts require LaTeX knowledge |
| Git-friendly source files | Limited interactive animation capabilities |
| Portable PDF output | Less visual editing than drag-and-drop tools |

---

## 17. Quick Viva Questions

### 🎓 Conceptual Questions

**Q1. What is Beamer?**

Beamer is a LaTeX document class used to create PDF presentations.

**Q2. What is a frame?**

A frame is a logical slide unit. Overlays may generate multiple PDF pages from one frame.

**Q3. What does `\usetheme` do?**

It selects the presentation's visual theme.

**Q4. What is an overlay?**

An overlay is a version of a frame showing a particular stage of progressively revealed content.

**Q5. How do you add a title slide?**

Declare the presentation metadata and place `\titlepage` inside a frame.

**Q6. What is the difference between LaTeX and Beamer?**

LaTeX is the broader document preparation system, while Beamer is a document class designed for presentations.

**Q7. How do you insert equations?**

Use LaTeX math mode, such as `$...$` or `\[...\]`.

**Q8. How do you create two columns?**

Use the `columns` environment containing separate `column` environments.

**Q9. Why compile twice?**

To update cross-references, navigation data, and table-of-contents information.

**Q10. Why use Git with Beamer?**

Plain-text source files allow change tracking, collaboration, and version history.

---

## 18. Practical Checklist

### ✅ Hands-on Tasks

- [ ] Compile the existing presentation successfully.
- [ ] Change the theme from Madrid to Boadilla.
- [ ] Add a frame explaining Git and GitHub.
- [ ] Create an overlay with three progressively appearing points.
- [ ] Add a mathematical expression.
- [ ] Create a two-column comparison.
- [ ] Explain why one frame may produce multiple PDF pages.
- [ ] Review the compiled presentation.

**Sample Source:** [presentation.tex](examples/presentation.tex)

**Compiled Output:** [presentation.pdf](output/presentation.pdf)

---

## 19. References

1. [Beamer Package — CTAN](https://ctan.org/pkg/beamer)
2. [Overleaf — Beamer Presentations](https://www.overleaf.com/learn/latex/Beamer)
3. [LaTeX Project — Official Website](https://www.latex-project.org/)

---

## 👩‍💻 Author

**Ananya Siju**

[GitHub](https://github.com/AnanyaIntech-source) | [LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [Email](mailto:ananyasiju16@gmail.com)
