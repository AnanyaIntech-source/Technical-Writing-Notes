
# 📝 LaTeX — Scientific Document Preparation

> **Write once. Typeset professionally.**

LaTeX is a document preparation system used for technical reports, research papers, mathematical expressions, and academic writing.

This module documents the concepts learned in the Technical Writing laboratory and provides a reproducible example.

## 🎯 Learning Objectives

- Understand the difference between LaTeX source and compiled PDF.
- Explain the preamble, document environment, classes, and packages.
- Format sections, lists, mathematical expressions, tables, and figures.
- Create cross-references and bibliographic references.
- Compile a `.tex` file and interpret common errors.

## 📂 Contents

| Resource | Description |
|---|---|
| [Detailed Notes](notes.md) | Concepts, syntax, commands, troubleshooting and viva questions |
| [Sample Source](examples/sample-document.tex) | Complete, compilable LaTeX report |
| [Sample PDF](output/sample-document.pdf) | Compiled output of the sample source |
| [Output Guide](output/README.md) | How the PDF was generated and verified |

## 🔍 Key Concepts

**Document class:** `article`, `report`, or `book` defines the overall layout.

**Preamble:** Settings before `\begin{document}`, including `\documentclass` and `\usepackage`.

**Environment:** A paired `\begin{...}` and `\end{...}` block.

**Packages:** Extend LaTeX functionality, e.g. `amsmath`, `graphicx`, `hyperref`.

**Compilation:** Converts `.tex` source to a formatted PDF using a LaTeX engine.

## 🛠️ Running the Example

1. Install TeX Live or MiKTeX, or open [Overleaf](https://www.overleaf.com/).
2. Open `examples/sample-document.tex`.
3. Compile using `pdflatex sample-document.tex`.
4. Run compilation twice to resolve cross-references.
5. Compare the generated PDF with `output/sample-document.pdf`.

From the repository root:

```bash
cd 01-LaTeX/examples
pdflatex -interaction=nonstopmode -halt-on-error sample-document.tex
pdflatex -interaction=nonstopmode -halt-on-error sample-document.tex
```

The generated PDF appears in `examples/` by default.

Move it into `../output/` when updating the committed sample.

Auxiliary files such as `.aux` and `.log` should generally be ignored by Git.

## 📘 Practical Demonstration

The example includes:

- Title and author information
- Abstract
- Sections and subsections
- Bold and italic formatting
- Numbered and bulleted lists
- Mathematical equations
- Tables
- TikZ diagrams
- Cross-references
- Bibliography

## 🎓 Learning Outcomes

After completing this module, a student should be able to explain the LaTeX document lifecycle, edit and compile a source file, and create well-structured technical documentation.

## 📚 References

- [LaTeX Project](https://www.latex-project.org/)
- [Overleaf Learn](https://www.overleaf.com/learn)
- [CTAN Package Archive](https://ctan.org/)

---
## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)
> 

