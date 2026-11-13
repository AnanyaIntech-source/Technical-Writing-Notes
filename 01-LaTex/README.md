
# 📝 LaTeX — Scientific Document Preparation

> **Write once. Typeset professionally.**

LaTeX is a document preparation system widely used for technical reports, research papers, mathematical expressions, and academic writing.

This module documents the concepts covered in the Technical Writing laboratory, along with a practical example demonstrating LaTeX document creation and compilation.

## Learning Objectives

- Understand the difference between LaTeX source files and compiled PDFs.
- Identify document classes, packages, the preamble, and document environments.
- Format text, sections, lists, equations, tables, and figures.
- Implement cross-references and bibliographic references.
- Compile `.tex` files and troubleshoot common errors.

## Contents

| Resource | Description |
|---|---|
| [Detailed Notes](notes.md) | Concepts, syntax, commands, troubleshooting, and viva questions |
| [Sample Source](examples/sample-document.tex) | Complete LaTeX document demonstrating key features |
| [Sample PDF](output/sample-document.pdf) | Compiled output of the sample source |

## Key Concepts

| Concept | Description |
|---|---|
| **Document Class** | Defines the document's structure and layout using `article`, `report`, or `book`. |
| **Preamble** | Contains document settings and package declarations before `\begin{document}`. |
| **Environment** | Structures content using paired `\begin{...}` and `\end{...}` commands. |
| **Packages** | Extend functionality using packages such as `amsmath`, `graphicx`, and `hyperref`. |
| **Compilation** | Converts `.tex` source files into formatted documents, typically PDFs. |

## Running the Example

### Option 1: Using Overleaf

1. Open [Overleaf](https://www.overleaf.com/).
2. Create a new project and upload `sample-document.tex`.
3. Compile the document.
4. Download the generated PDF.

### Option 2: Using a Local LaTeX Installation

Install [TeX Live](https://www.tug.org/texlive/) or [MiKTeX](https://miktex.org/).

From the repository root, run:

```bash
cd 01-LaTeX/examples
pdflatex -interaction=nonstopmode -halt-on-error sample-document.tex
pdflatex -interaction=nonstopmode -halt-on-error sample-document.tex
```

The generated PDF will appear inside `examples/`.

**Note:** Compiling twice helps resolve cross-references. Auxiliary files such as `.aux` and `.log` should generally be excluded from version control.

## Practical Demonstration

The sample document demonstrates:

- Title, author information, and abstract
- Sections and subsections
- Text formatting and lists
- Mathematical expressions and equations
- Tables and TikZ diagrams
- Cross-references and bibliography

**Source:** [sample-document.tex](examples/sample-document.tex)  
**Output:** [sample-document.pdf](output/sample-document.pdf)

---

## Learning Outcomes

Through this module, I learned to structure, format, compile, and troubleshoot LaTeX documents while applying these concepts to technical and academic documentation.

---

## References

- [LaTeX Project — Official Website](https://www.latex-project.org/)
- [Overleaf — LaTeX Documentation](https://www.overleaf.com/learn)
- [CTAN — Comprehensive TeX Archive Network](https://ctan.org/)

---

## 👩‍💻 Author

**Ananya Siju**

[GitHub](https://github.com/AnanyaIntech-source) | [LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [Email](mailto:ananyasiju16@gmail.com)
