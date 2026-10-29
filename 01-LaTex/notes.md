
# 📖 LaTeX — Detailed Notes and Command Reference

## 1. Introduction

LaTeX is a markup-based typesetting system. Rather than manually adjusting the appearance of every paragraph, authors write plain-text commands that describe the document structure. A compiler converts the `.tex` source into a PDF.

**Advantages:** Consistent formatting, high-quality equations, cross-references, bibliographies, reusable templates, and version-control-friendly text files.

**Limitations:** A learning curve, compilation errors, and sometimes complex package configuration.

---

## 2. Basic Structure

A basic LaTeX document follows this structure:

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

### Explanation

| Component | Purpose |
|---|---|
| `\documentclass{article}` | Selects document layout |
| `\usepackage{amsmath}` | Adds mathematical tools |
| `\begin{document}` | Starts visible content |
| `\maketitle` | Prints title, author and date |
| `\section{...}` | Adds a numbered heading |
| `% comment` | Adds source-only comment |

---

## 3. Document Classes and Packages

### Document Classes

| Class | Purpose |
|---|---|
| `article` | Short reports and research papers |
| `report` | Long reports with chapters |
| `book` | Books and extensive documents |
| `beamer` | Presentations and slides |

### Common Packages

| Package | Function |
|---|---|
| `amsmath` | Mathematical typesetting |
| `graphicx` | Inserting external images |
| `hyperref` | Hyperlinks and clickable references |
| `geometry` | Margins and page dimensions |
| `booktabs` | Professional tables |
| `tikz` | Diagrams drawn in LaTeX |

Example:

```latex
\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{hyperref}
```

---

## 4. Formatting and Sections

LaTeX provides commands for creating structured headings and formatting text.

```latex
\section{Main Heading}

\subsection{Subheading}

\textbf{Bold text}

\textit{Italic text}

\emph{Emphasized text}

\newline
```

### Important Points

- `\section{}` creates a main section.
- `\subsection{}` creates a subsection.
- `\textbf{}` produces bold text.
- `\textit{}` produces italic text.
- `\emph{}` emphasizes text.
- `\newline` forces a line break.

**Note:** Use a blank line to begin a new paragraph. A double backslash `\\` forces a line break where appropriate, but should not be used as a general paragraph separator.

---

## 5. Lists

LaTeX supports ordered and unordered lists.

### Unordered List

```latex
\begin{itemize}
    \item First bullet
    \item Second bullet
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
    \item First step
    \item Second step
\end{enumerate}
```

**Difference:**

- `itemize` creates bullet points.
- `enumerate` creates numbered lists.

---

## 6. Mathematics

LaTeX is widely used for mathematical and scientific expressions.

### Inline Mathematics

```latex
$E=mc^2$
```

### Display Mathematics

```latex
\[E=mc^2\]
```

### Numbered Equation

```latex
\begin{equation}
    \bar{x}=\frac{1}{n}\sum_{i=1}^{n}x_i
    \label{eq:mean}
\end{equation}
```

### Mathematical Commands

| Command | Purpose |
|---|---|
| `\frac{a}{b}` | Fraction |
| `x^2` | Superscript |
| `x_i` | Subscript |
| `\sqrt{x}` | Square root |
| `\sum` | Summation |
| `\int` | Integral |
| `\bar{x}` | Bar notation |

### Example: Quadratic Formula

```latex
\begin{equation}
x = \frac{-b \pm \sqrt{b^2-4ac}}{2a}
\end{equation}
```

---

## 7. Tables

Tables organize data into rows and columns.

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

| Symbol | Meaning |
|---|---|
| `l` | Left alignment |
| `c` | Center alignment |
| `r` | Right alignment |
| `&` | Separates columns |
| `\\` | Ends a row |
| `\hline` | Draws a horizontal line |
| `\caption{}` | Adds table caption |
| `\label{}` | Creates reference key |

---

## 8. Figures

External images are inserted using the `graphicx` package.

### Import Package

```latex
\usepackage{graphicx}
```

### Insert Image

```latex
\begin{figure}[htbp]
    \centering

    \includegraphics[width=0.5\textwidth]{diagram.png}

    \caption{Example diagram}
    \label{fig:diagram}

\end{figure}
```

### Explanation

- `figure` creates a floating figure environment.
- `\centering` centers the image.
- `\includegraphics` inserts the image.
- `\caption` adds a caption.
- `\label` creates a reference identifier.

**Important:** The image file must exist at the referenced path.

The supplied sample document instead uses TikZ to draw a diagram, so it does not require an external image.

---

## 9. References and Bibliography

LaTeX supports automatic cross-references and citations.

### Cross-References

```latex
\section{Introduction}
\label{sec:intro}

Refer to Section~\ref{sec:intro}.
```

### Equation References

```latex
\begin{equation}
E = mc^2
\label{eq:energy}
\end{equation}

Equation~\eqref{eq:energy}
```

`\eqref` automatically adds parentheses around equation numbers and is provided by `amsmath`.

### Bibliography

```latex
\begin{thebibliography}{9}

\bibitem{ref1}
Author, Title, Year.

\end{thebibliography}
```

### Citation

```latex
\cite{ref1}
```

For larger research documents, BibTeX or biblatex/Biber may be used.

**Note:** Compile twice to update cross-references.

---

## 10. Special Characters

Some symbols have special meanings in LaTeX and must be escaped when used as ordinary text.

| Literal Symbol | LaTeX Input |
|---|---|
| `%` | `\%` |
| `$` | `\$` |
| `&` | `\&` |
| `_` | `\_` |
| `#` | `\#` |
| `{` | `\{` |
| `}` | `\}` |

Example:

```latex
The result is 90\%.

The price is \$100.

Research \& Development.
```

---

## 11. Compilation

LaTeX source files use the `.tex` extension.

The compiler converts the source file into a formatted PDF.

### Compilation Commands

```bash
pdflatex sample-document.tex
pdflatex sample-document.tex
```

### Compilation Process

1. Write the `.tex` source.
2. Run the LaTeX compiler.
3. Generate the PDF and auxiliary files.
4. Compile again to resolve references.
5. Review the final PDF.

### Generated Files

| File | Purpose |
|---|---|
| `.tex` | Source document |
| `.pdf` | Compiled document |
| `.aux` | Reference information |
| `.log` | Compilation log |
| `.out` | Additional output metadata |

---

## 12. Common Errors

| Error | Likely Cause | Solution |
|---|---|---|
| `Undefined control sequence` | Misspelled command or missing package | Check spelling and package imports |
| `Missing $ inserted` | Math command outside math mode | Use `$...$` or `\[...\]` |
| `File ... not found` | Missing image or package | Check file path or install package |
| `Environment ... undefined` | Missing package or typo | Load package and check spelling |
| `Reference ... undefined` | Incorrect label or insufficient compilation | Verify label and compile again |

### Troubleshooting Tips

- Check that every `\begin{}` has a matching `\end{}`.
- Verify package imports.
- Ensure external image paths are correct.
- Use mathematical commands inside math mode.
- Recompile when references are unresolved.

---

## 13. Quick Viva Questions

### Q1. What is LaTeX?
LaTeX is a document preparation and typesetting system.

### Q2. What is a `.tex` file?
A plain-text source file containing LaTeX markup.

### Q3. What is the preamble?
The configuration section before `\begin{document}`.

### Q4. Difference between `\section` and `\subsection`?
They represent different heading levels.

### Q5. What does `amsmath` do?
It adds advanced mathematical typesetting features.

### Q6. Why compile twice?
To resolve cross-references and update numbering.

### Q7. What is `\label` used for?
It defines a target for references.

### Q8. Difference between LaTeX and Beamer?
LaTeX is the document preparation system, while Beamer is a LaTeX document class used for presentations.

### Q9. What is Overleaf?
An online LaTeX editor and collaboration platform.

### Q10. Why use LaTeX with Git?
Its text-based source makes revisions and collaboration easier to track.

---

## 14. Practical Checklist

- [ ] Read the sample source.
- [ ] Compile the PDF successfully.
- [ ] Change the title and compile again.
- [ ] Add a section and an itemized list.
- [ ] Add an equation with a label and reference.
- [ ] Explain the table and diagram syntax.
- [ ] Demonstrate a Git commit for the edited `.tex` file.

---

## 📚 References

1. [The LaTeX Project](https://www.latex-project.org/)
2. [Overleaf — Learn LaTeX](https://www.overleaf.com/learn)
3. [CTAN — Comprehensive TeX Archive Network](https://ctan.org/)

---

## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)
> 

