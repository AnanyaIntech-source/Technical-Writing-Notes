
# 📘 Beamer — Detailed Notes and Command Reference

## 1. What is Beamer?

Beamer is a LaTeX document class for creating presentation slides as PDF documents. The source is plain text, making it suitable for Git version control and reproducible builds.

## 2. Prerequisites

- Basic LaTeX syntax (`\documentclass`, environments, commands).
- A LaTeX installation with Beamer, or an Overleaf account.
- A text editor and PDF viewer.

## 3. Basic Structure

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

`aspectratio=169` specifies a 16:9 slide ratio. `\titlepage` prints title metadata.

## 4. Frames and Sections

```latex
\section{Introduction}
\begin{frame}{Overview}
  A slide's contents.
\end{frame}
```

`\section` organizes the presentation; `\tableofcontents` displays the outline.

## 5. Themes

| Command | Purpose |
|---|---|
| `\usetheme{Madrid}` | Select the Madrid theme |
| `\usetheme{Boadilla}` | Select the Boadilla theme |
| `\usecolortheme{default}` | Use default color styling |
| `\setbeamertemplate{navigation symbols}{}` | Hide navigation icons |

## 6. Lists

```latex
\begin{itemize}
  \item Bullet one
  \item Bullet two
\end{itemize}

\begin{enumerate}
  \item Step one
  \item Step two
\end{enumerate}
```

## 7. Blocks

```latex
\begin{block}{Definition}
  Standard highlighted content.
\end{block}

\begin{alertblock}{Warning}
  Important information.
\end{alertblock}

\begin{exampleblock}{Example}
  Illustrative content.
\end{exampleblock}
```

## 8. Overlays

```latex
\begin{frame}{Progressive Reveal}
  \begin{itemize}
    \item<1-> Appears first
    \item<2-> Appears second
    \item<3-> Appears third
  \end{itemize}
\end{frame}
```

`<2->` means the item becomes visible from overlay 2 onward. `\pause` is another way to split content into successive overlays.

## 9. Mathematics

```latex
Inline: $a^2+b^2=c^2$.

Displayed: \[x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}\]
```

Use `amsmath` for additional mathematical environments.

## 10. Tables

```latex
\begin{tabular}{ll}
Topic & Tool \\
Documents & LaTeX \\
Slides & Beamer \\
\end{tabular}
```

## 11. Columns

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

## 12. Figures

```latex
\usepackage{graphicx} % in preamble

% inside a frame:
\includegraphics[width=0.6\textwidth]{figure.png}
```

The referenced image must exist in the project directory or at the specified relative path.

## 13. Useful Commands

| Command | Explanation |
|---|---|
| `\documentclass{beamer}` | Set the document class |
| `\begin{frame}` | Start a slide |
| `\frametitle{...}` | Set slide title |
| `\titlepage` | Render title slide |
| `\tableofcontents` | Render section outline |
| `\section{...}` | Create a section |
| `\pause` | Introduce an overlay break |
| `\alert{...}` | Emphasize text |
| `\includegraphics{...}` | Insert an image |
| `\begin{columns}` | Create a multi-column layout |

## 14. Compilation

```bash
pdflatex -interaction=nonstopmode -halt-on-error -output-directory=output presentation.tex
pdflatex -interaction=nonstopmode -halt-on-error -output-directory=output presentation.tex
```

Compile twice to refresh table-of-contents and navigation data. `presentation.pdf` is generated inside `output/`.

**Note:** Create the `output` directory before compiling.

## 15. Common Errors and Fixes

| Error | Likely Cause | Fix |
|---|---|---|
| `File beamer.cls not found` | Beamer package missing | Install Beamer / use Overleaf |
| `Undefined control sequence` | Misspelled command or missing package | Check syntax and preamble |
| `File ... not found` | Incorrect image path | Fix filename or relative path |
| `Runaway argument` | Missing brace | Check `{` and `}` |
| Overfull box warning | Too much content on slide | Reduce text or split into frames |

## 16. Advantages and Limitations

**Advantages:** Consistent formatting, mathematical typesetting, text-based collaboration, Git-friendly source files, portable PDF output.

**Limitations:** Learning curve, compilation step, and less convenient manual visual positioning than drag-and-drop editors.

## 17. Viva Questions and Answers

**Q1. What is Beamer?**  
A LaTeX document class used to create PDF presentations.

**Q2. What is a frame?**  
A Beamer environment representing a logical slide; overlays can create multiple PDF pages from one frame.

**Q3. What does `\usetheme` do?**  
It selects the presentation's visual theme.

**Q4. What is an overlay?**  
A version of a frame showing a particular state of progressively revealed content.

**Q5. How do you add a title slide?**  
Put `\titlepage` inside a frame after declaring title metadata.

**Q6. What is the difference between LaTeX and Beamer?**  
LaTeX is the broader typesetting system; Beamer is a document class built for presentations.

**Q7. How do you insert equations?**  
Use math mode such as `$...$` or `\[...\]`.

**Q8. How do you create two columns?**  
Use `columns` containing separate `column` environments.

**Q9. Why compile twice?**  
To update cross-references and navigation or table-of-contents data.

**Q10. Why use Git with Beamer?**  
Text-based source files support change tracking, collaboration, and version history.

## 18. Practice Tasks

- [ ] Change the theme from Madrid to Boadilla and compile again.
- [ ] Add a new frame about Git and GitHub.
- [ ] Create an overlay with three progressively appearing points.
- [ ] Add a mathematical formula and a two-column comparison.
- [ ] Explain why one frame can produce multiple PDF pages.

## 19. References

- [Beamer Package — CTAN](https://ctan.org/pkg/beamer)
- [Overleaf — Beamer Presentations](https://www.overleaf.com/learn/latex/Beamer)
- [LaTeX Project](https://www.latex-project.org/)

---

## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)
> 
