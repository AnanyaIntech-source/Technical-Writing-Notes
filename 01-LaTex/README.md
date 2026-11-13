
# 📝 LaTeX — Scientific Document Preparation

### Technical Writing Laboratory | MNIT Jaipur

> **Write once. Typeset professionally.**

LaTeX is a document preparation system widely used for technical reports, research papers, mathematical expressions, and academic writing.

This module documents the concepts covered in the Technical Writing laboratory, including LaTeX syntax, document structure, formatting commands, mathematical expressions, tables, figures, references, compilation, and troubleshooting.

---

## About LaTeX

LaTeX is a markup-based document preparation and typesetting system widely used for scientific, technical, and academic documentation.

Unlike traditional word processors, LaTeX separates **document content from formatting**. Users write commands in a plain-text `.tex` file, which is processed by a LaTeX compiler to produce a professionally formatted document.

### Learning Objectives

- Understand the difference between LaTeX source files and compiled PDFs.
- Identify document classes, packages, the preamble, and document environments.
- Format text, sections, lists, equations, tables, and figures.
- Implement cross-references and bibliographic references.
- Compile `.tex` files and troubleshoot common errors.
- Understand how LaTeX source files can be managed using Git.

---

## Repository Structure

```text
01-LaTeX/
├── README.md
├── examples/
│   └── sample-document.tex
└── output/
    └── sample-document.pdf
```

| Resource | Description |
|---|---|
| `README.md` | Complete LaTeX documentation, syntax, examples, troubleshooting, and viva questions |
| [Sample Source](examples/sample-document.tex) | Complete LaTeX document demonstrating key features |
| [Sample PDF](output/sample-document.pdf) | Compiled output of the sample source |

---

## Table of Contents

1. [Introduction to LaTeX](#1-introduction-to-latex)
2. [Basic Document Structure](#2-basic-document-structure)
3. [Document Classes and Packages](#3-document-classes-and-packages)
4. [Text Formatting and Sectioning](#4-text-formatting-and-sectioning)
5. [Lists](#5-lists)
6. [Mathematical Expressions](#6-mathematical-expressions)
7. [Tables](#7-tables)
8. [Figures and Diagrams](#8-figures-and-diagrams)
9. [Cross-References and Bibliography](#9-cross-references-and-bibliography)
10. [Special Characters](#10-special-characters)
11. [Practical Demonstration](#11-practical-demonstration)
12. [Compilation and Generated Files](#12-compilation-and-generated-files)
13. [Common Errors and Troubleshooting](#13-common-errors-and-troubleshooting)
14. [Quick Viva Questions](#14-quick-viva-questions)
15. [Practical Checklist](#15-practical-checklist)
16. [Learning Outcomes](#16-learning-outcomes)
17. [References](#17-references)

---

## 1. Introduction to LaTeX

LaTeX is particularly useful for documents requiring consistent formatting, mathematical notation, automatic numbering, cross-references, and bibliographic citations.

### Key Concepts

| Concept | Description |
|---|---|
| **Document Class** | Defines the document's structure and layout using `article`, `report`, or `book`. |
| **Preamble** | Contains document settings and package declarations before `\begin{document}`. |
| **Environment** | Structures content using paired `\begin{...}` and `\end{...}` commands. |
| **Packages** | Extend functionality using packages such as `amsmath`, `graphicx`, and `hyperref`. |
| **Compilation** | Converts `.tex` source files into formatted documents, typically PDFs. |

### Advantages and Limitations

| Advantages | Limitations |
|---|---|
| Consistent document formatting | Initial learning curve |
| High-quality mathematical equations | Compilation errors require debugging |
| Automatic numbering and cross-references | Package configuration can be complex |
| Bibliography and citation management | Less intuitive for visual editing |
| Reusable document templates | Requires a LaTeX environment |
| Git-friendly plain-text source files | Some layouts need advanced commands |

### Important Terms

- **Source File:** A `.tex` file containing LaTeX commands and content.
- **Compiler:** Processes the source file to generate formatted output.
- **Preamble:** Contains document configuration and package declarations.
- **Environment:** Defines structured content using `\begin{}` and `\end{}`.
- **Package:** Extends LaTeX's built-in functionality.

---

## 2. Basic Document Structure

A LaTeX document consists of two main parts:

1. **Preamble:** Document class, packages, and configuration.
2. **Document Body:** Visible content enclosed within the document environment.

### Basic Example

```latex
\documentclass[12pt,a4paper]{article}
\usepackage{amsmath}

\title{My First LaTeX Document}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
Hello, LaTeX!

\end{document}
```

### Command Explanation

| Command | Purpose |
|---|---|
| `\documentclass{article}` | Defines the document class |
| `\usepackage{amsmath}` | Enables additional mathematical features |
| `\title{}` | Defines the document title |
| `\author{}` | Defines the author |
| `\date{\today}` | Displays the current compilation date |
| `\begin{document}` | Begins the document body |
| `\maketitle` | Generates the title |
| `\section{}` | Creates a numbered section |
| `\end{document}` | Ends the document |
| `% comment` | Adds a source comment ignored during compilation |

---

## 3. Document Classes and Packages

### Document Classes

A document class determines the overall structure and layout of a LaTeX document.

| Class | Purpose |
|---|---|
| `article` | Articles, short reports, and research papers |
| `report` | Longer reports, theses, and projects |
| `book` | Books and extensive documents |
| `beamer` | Presentations and slides |

**Syntax:**

```latex
\documentclass[12pt,a4paper]{article}
```

Here:

- `12pt` specifies the base font size.
- `a4paper` specifies the paper size.
- `article` specifies the document class.

### Common Packages

Packages provide additional functionality.

| Package | Function |
|---|---|
| `amsmath` | Advanced mathematical typesetting |
| `graphicx` | Inserting and resizing images |
| `hyperref` | Hyperlinks and clickable references |
| `geometry` | Page margins and dimensions |
| `booktabs` | Professional table formatting |
| `tikz` | Drawing diagrams and graphics |

**Example:**

```latex
\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{hyperref}
```

**Note:** Packages are normally declared in the preamble, before `\begin{document}`.

---

## 4. Text Formatting and Sectioning

LaTeX provides commands for organizing content and formatting text.

### Sectioning Commands

```latex
\section{Main Heading}

\subsection{Subheading}

\subsubsection{Smaller Heading}
```

| Command | Purpose |
|---|---|
| `\section{}` | Creates a main section |
| `\subsection{}` | Creates a subsection |
| `\subsubsection{}` | Creates a lower-level heading |

### Text Formatting

```latex
\textbf{Bold text}

\textit{Italic text}

\emph{Emphasized text}

\underline{Underlined text}
```

| Command | Output |
|---|---|
| `\textbf{}` | Bold text |
| `\textit{}` | Italic text |
| `\emph{}` | Emphasized text, usually italic |
| `\underline{}` | Underlined text |

### Line Breaks and Paragraphs

```latex
First paragraph.

Second paragraph.
```

A blank line starts a new paragraph.

```latex
First line\\
Second line
```

`\\` forces a line break in appropriate contexts.

`\newline` can also create a line break.

**Important:** Avoid using `\\` repeatedly to separate paragraphs.

---

## 5. Lists

LaTeX supports ordered and unordered lists using environments.

### Unordered List — `itemize`

```latex
\begin{itemize}
    \item First bullet
    \item Second bullet
\end{itemize}
```

### Ordered List — `enumerate`

```latex
\begin{enumerate}
    \item First step
    \item Second step
\end{enumerate}
```

### Comparison

| Environment | Purpose | Output |
|---|---|---|
| `itemize` | Unordered list | Bullet points |
| `enumerate` | Ordered list | Numbered items |

Each list item begins with `\item`.

---

## 6. Mathematical Expressions

LaTeX is particularly useful for mathematical and scientific notation.

### Inline Mathematics

Used to include mathematical expressions within a sentence.

```latex
The equation is $E=mc^2$.
```

### Display Mathematics

Used to display an equation separately without numbering.

```latex
\[
E=mc^2
\]
```

### Numbered Equations

```latex
\begin{equation}
    \bar{x} = \frac{1}{n}\sum_{i=1}^{n}x_i
    \label{eq:mean}
\end{equation}
```

The `equation` environment automatically numbers the equation.

### Important Mathematical Commands

| Command | Purpose |
|---|---|
| `\frac{a}{b}` | Fraction |
| `x^2` | Superscript |
| `x_i` | Subscript |
| `\sqrt{x}` | Square root |
| `\sum` | Summation |
| `\int` | Integral |
| `\bar{x}` | Bar notation |
| `\pm` | Plus-minus symbol |

### Example: Quadratic Formula

```latex
\begin{equation}
x = \frac{-b \pm \sqrt{b^2-4ac}}{2a}
\end{equation}
```

**Important:** Mathematical commands such as `\frac` and `\sum` must be used in math mode.

---

## 7. Tables

Tables organize information into rows and columns.

### Example

```latex
\begin{table}[htbp]
\centering

\begin{tabular}{lcc}
\hline
Tool & Input & Output \\
\hline
LaTeX & .tex & .pdf \\
\hline
\end{tabular}

\caption{A sample table}
\label{tab:sample}

\end{table}
```

### Table Syntax

| Command / Symbol | Meaning |
|---|---|
| `l` | Left alignment |
| `c` | Center alignment |
| `r` | Right alignment |
| `&` | Separates columns |
| `\\` | Ends a table row |
| `\hline` | Draws a horizontal line |
| `\caption{}` | Adds a caption |
| `\label{}` | Defines a reference key |

### Important Points

- `tabular` creates the table's rows and columns.
- `table` provides a floating environment with captions and references.
- `{lcc}` specifies three columns: left, center, center.
- `[htbp]` suggests placement here, top, bottom, or on a float page.

---

## 8. Figures and Diagrams

Figures can be inserted using external image files or created directly using LaTeX drawing packages.

### Importing Images

The `graphicx` package supports external images.

**Package:**

```latex
\usepackage{graphicx}
```

**Example:**

```latex
\begin{figure}[htbp]
    \centering

    \includegraphics[width=0.5\textwidth]{diagram.png}

    \caption{Example diagram}
    \label{fig:diagram}

\end{figure}
```

### Figure Commands

| Command | Purpose |
|---|---|
| `figure` | Floating figure environment |
| `\centering` | Centers content |
| `\includegraphics` | Inserts an external image |
| `width=0.5\textwidth` | Sets image width to half the text width |
| `\caption{}` | Adds a caption |
| `\label{}` | Creates a reference identifier |

**Important:** The referenced image must exist at the specified path.

### TikZ Diagrams

TikZ is a LaTeX package used to create diagrams programmatically.

**Package:**

```latex
\usepackage{tikz}
```

**Example:**

```latex
\begin{tikzpicture}
    \draw (0,0) -- (3,0);
    \draw (0,0) -- (0,2);
\end{tikzpicture}
```

The sample document uses TikZ to generate a diagram without requiring an external image.

---

## 9. Cross-References and Bibliography

LaTeX supports automatic references to sections, equations, figures, tables, and bibliographic entries.

### Section References

```latex
\section{Introduction}
\label{sec:intro}

Refer to Section~\ref{sec:intro}.
```

`\label{}` defines the reference key.

`\ref{}` retrieves the associated number.

### Equation References

```latex
\begin{equation}
E = mc^2
\label{eq:energy}
\end{equation}

Refer to Equation~\eqref{eq:energy}.
```

`\eqref{}` automatically includes parentheses around the equation number and is provided by `amsmath`.

### Bibliography

```latex
\begin{thebibliography}{9}

\bibitem{ref1}
Author, Title, Year.

\end{thebibliography}
```

### Citations

```latex
According to the reference \cite{ref1}, ...
```

| Command | Purpose |
|---|---|
| `\label{}` | Defines a reference key |
| `\ref{}` | Retrieves a numbered reference |
| `\eqref{}` | Retrieves a parenthesized equation number |
| `\bibitem{}` | Defines a bibliography entry |
| `\cite{}` | Cites a bibliography entry |

For larger research documents, BibTeX or `biblatex` with Biber can be used.

**Note:** Cross-references generally require multiple compilation passes.

---

## 10. Special Characters

Certain characters have special meanings in LaTeX and must be escaped when used as ordinary text.

### Common Special Characters

| Literal Symbol | LaTeX Input |
|---|---|
| `%` | `\%` |
| `$` | `\$` |
| `&` | `\&` |
| `_` | `\_` |
| `#` | `\#` |
| `{` | `\{` |
| `}` | `\}` |

### Example

```latex
The result is 90\%.

The price is \$100.

Research \& Development.
```

**Important:** An unescaped `%` starts a comment, so the remainder of that source line is ignored.

---

## 11. Practical Demonstration

**Project:** Scientific Document Preparation — Technical Writing Laboratory

The sample document demonstrates:

1. Title, author information, and abstract.
2. Sections and subsections.
3. Text formatting and lists.
4. Mathematical expressions and equations.
5. Tables and TikZ diagrams.
6. Cross-references and bibliography.

### Project Resources

**Source:** [sample-document.tex](examples/sample-document.tex)

**Output:** [sample-document.pdf](output/sample-document.pdf)

---

## 12. Compilation and Generated Files

Compilation converts LaTeX source code into a formatted output document.

### Method 1: Using Overleaf

1. Open [Overleaf](https://www.overleaf.com/).
2. Create a new project.
3. Upload `sample-document.tex`.
4. Compile the document.
5. Download the generated PDF.

### Method 2: Using a Local LaTeX Installation

Install [TeX Live](https://www.tug.org/texlive/) or [MiKTeX](https://miktex.org/).

From the repository root, run:

```bash
cd 01-LaTeX/examples

pdflatex -interaction=nonstopmode -halt-on-error sample-document.tex

pdflatex -interaction=nonstopmode -halt-on-error sample-document.tex
```

The generated PDF will appear inside `examples/`.

Move or copy the final PDF to `01-LaTeX/output/` when updating the repository's sample output.

**Note:** Compiling twice helps resolve cross-references and update numbering.

### Compilation Process

1. Write or modify the `.tex` source file.
2. Run the LaTeX compiler.
3. Generate the PDF and auxiliary files.
4. Compile again to update references.
5. Review the final PDF.

### Generated Files

| File | Purpose |
|---|---|
| `.tex` | Source document |
| `.pdf` | Compiled output |
| `.aux` | Auxiliary reference information |
| `.log` | Compilation messages and errors |
| `.out` | Additional metadata, often used by packages such as `hyperref` |

**Note:** Auxiliary files are normally excluded from Git repositories using `.gitignore`.

---

## 13. Common Errors and Troubleshooting

### Common Compilation Errors

| Error | Likely Cause | Solution |
|---|---|---|
| `Undefined control sequence` | Misspelled command or missing package | Verify command spelling and package imports |
| `Missing $ inserted` | Math-only syntax outside math mode | Use `$...$` or `\[...\]` |
| `File ... not found` | Missing image, source file, or package | Check paths and required packages |
| `Environment ... undefined` | Missing package or incorrect environment name | Verify spelling and package imports |
| `Reference ... undefined` | Incorrect label or insufficient compilation | Check labels and recompile |

### Troubleshooting Checklist

- Verify that every `\begin{}` has a matching `\end{}`.
- Check package declarations in the preamble.
- Confirm external image paths.
- Use mathematical commands inside math mode.
- Check spelling and capitalization.
- Recompile when references are unresolved.
- Review the `.log` file for detailed error messages.

---

## 14. Quick Viva Questions

### Conceptual Questions

**Q1. What is LaTeX?**

LaTeX is a markup-based document preparation and typesetting system.

**Q2. What is a `.tex` file?**

A plain-text source file containing LaTeX commands and document content.

**Q3. What is the preamble?**

The configuration section before `\begin{document}`.

**Q4. What is the difference between `\section` and `\subsection`?**

They create different levels of document headings.

**Q5. What is the purpose of `amsmath`?**

It provides additional mathematical typesetting commands and environments.

**Q6. Why is compilation sometimes performed twice?**

To resolve cross-references and update numbering.

**Q7. What is `\label` used for?**

It defines a reference key that can be accessed using commands such as `\ref`.

**Q8. What is the difference between LaTeX and Beamer?**

LaTeX is a document preparation system, while Beamer is a LaTeX document class used to create presentations.

**Q9. What is Overleaf?**

An online LaTeX editor supporting compilation and collaboration.

**Q10. Why is LaTeX suitable for Git?**

Its plain-text source files make version tracking and collaboration easier.

---

## 15. Practical Checklist

### Hands-on Tasks

- [ ] Read and understand the sample `.tex` file.
- [ ] Compile the sample document successfully.
- [ ] Modify the title and recompile.
- [ ] Add a section and an itemized list.
- [ ] Create a mathematical equation with a label.
- [ ] Reference the equation using `\eqref`.
- [ ] Explain table and diagram syntax.
- [ ] Demonstrate a Git commit for the modified `.tex` file.

**Sample Source:** [sample-document.tex](examples/sample-document.tex)

**Compiled Output:** [sample-document.pdf](output/sample-document.pdf)

---

## 16. Learning Outcomes

Through this module, I learned to:

- Structure technical and academic documents using LaTeX.
- Apply document classes, packages, and environments.
- Format text, sections, lists, equations, tables, and figures.
- Implement automatic numbering and cross-references.
- Create bibliographic entries and citations.
- Compile LaTeX source files into PDF documents.
- Identify and troubleshoot common compilation errors.
- Maintain LaTeX source files using Git.

---

## 17. References

1. [LaTeX Project — Official Website](https://www.latex-project.org/)
2. [Overleaf — LaTeX Documentation](https://www.overleaf.com/learn)
3. [CTAN — Comprehensive TeX Archive Network](https://ctan.org/)

---

## 👩‍💻 Author

**Ananya Siju**

[GitHub](https://github.com/AnanyaIntech-source) | [LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [Email](mailto:ananyasiju16@gmail.com)
