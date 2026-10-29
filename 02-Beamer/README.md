
# 📊 Beamer — Professional Presentations Using LaTeX

### Technical Writing Laboratory | MNIT Jaipur

> **Structure ideas. Present clearly. Communicate professionally.**

Beamer is a LaTeX document class used to create reproducible, PDF-based slide presentations. This module documents its essential concepts, syntax, customization options, and practical use in academic and technical communication.

---

## 🔗 About Beamer

Beamer is particularly useful for scientific talks, lectures, research presentations, and demonstrations that require equations, tables, and consistent formatting.

Unlike traditional slide editors, Beamer presentations are authored as text-based `.tex` files and compiled into PDFs.

### Objectives

- Understand how Beamer builds on LaTeX.
- Create a title slide, outline, and multiple frames.
- Apply themes and color themes.
- Use lists, blocks, overlays, columns, equations, and tables.
- Compile, inspect, and version-control a presentation.

---

## 🚀 Key Features

| Feature | Description |
|---|---|
| Frames | Individual presentation slides |
| Themes | Consistent visual layout and styling |
| Blocks | Structured callouts for information |
| Overlays | Progressive revelation of content |
| Columns | Side-by-side slide layouts |
| Mathematics | Native LaTeX mathematical notation |
| Tables | Structured tabular information |
| PDF Output | Portable presentation format |

---

## 🧩 Basic Beamer Structure

```latex
\documentclass{beamer}

\usetheme{Madrid}

\title{My First Presentation}
\author{Student Name}
\date{\today}

\begin{document}

\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{Introduction}
    Hello, Beamer!
\end{frame}

\end{document}
```

The `beamer` document class enables presentation features, while each `frame` defines slide content.

---

## 🎨 Themes and Customization

Beamer supports predefined presentation themes that control the visual appearance of slides.

### Common Themes

| Theme | Description |
|---|---|
| Madrid | Clean and professional |
| Berlin | Structured navigation |
| CambridgeUS | Academic presentation style |
| Warsaw | Traditional presentation layout |
| Boadilla | Minimal and simple |

### Applying a Theme

```latex
\usetheme{Madrid}
```

### Applying a Color Theme

```latex
\usecolortheme{seahorse}
```

Theme availability depends on the LaTeX installation.

---

## 📝 Lists and Blocks

Beamer supports structured lists and highlighted content blocks.

### Example

```latex
\begin{frame}{Key Points}

    \begin{itemize}
        \item First concept
        \item Second concept
    \end{itemize}

    \begin{alertblock}{Remember}
        Keep slides concise.
    \end{alertblock}

\end{frame}
```

### Types of Blocks

| Environment | Purpose |
|---|---|
| `block` | General information |
| `alertblock` | Important information |
| `exampleblock` | Examples and demonstrations |

---

## 🎬 Overlays

Overlays allow presentation content to appear progressively.

### Example

```latex
\begin{itemize}
    \item<1-> Introduction
    \item<2-> Explanation
    \item<3-> Conclusion
\end{itemize}
```

### Explanation

- `<1->` displays the first item from overlay 1 onward.
- `<2->` displays the second item from overlay 2 onward.
- `<3->` displays the third item from overlay 3 onward.

The frame produces multiple PDF pages corresponding to different overlay states.

Overlays do not require animation software.

---

## 📐 Equations, Tables, and Columns

Beamer supports standard LaTeX mathematical notation and structured layouts.

### Mathematical Equation

```latex
\[
E = mc^2
\]
```

### Tables

```latex
\begin{tabular}{|c|c|}
\hline
Feature & Description \\
\hline
Frames & Slides \\
Themes & Layouts \\
\hline
\end{tabular}
```

### Columns

```latex
\begin{columns}

    \begin{column}{0.48\textwidth}
        Left Column Content
    \end{column}

    \begin{column}{0.48\textwidth}
        Right Column Content
    \end{column}

\end{columns}
```

For a complete implementation, refer to the [presentation source](presentation.tex).

---

## 💻 Practical Implementation

**Project:** Introduction to Beamer — Technical Writing Laboratory

### Demonstration Contents

1. Title slide and outline.
2. Introduction to Beamer.
3. Structured lists and blocks.
4. Progressive overlays.
5. Mathematical equations.
6. Tabular information.
7. Two-column comparison.
8. Compilation workflow and learning outcomes.

### Project Resources

📄 [View Source Code](presentation.tex)

📑 [View Compiled Presentation](output/presentation.pdf)

📘 [Detailed Notes and Command Reference](notes.md)

---

## ⚙️ How to Compile

### Method 1: Overleaf

1. Open [Overleaf](https://www.overleaf.com/).
2. Create a blank project.
3. Paste the contents of `presentation.tex`.
4. Click **Recompile**.
5. Download the generated PDF.

### Method 2: Local LaTeX Installation

Install TeX Live or MiKTeX with the Beamer class.

From the `02-Beamer` directory, run:

```bash
pdflatex -interaction=nonstopmode -halt-on-error -output-directory=output presentation.tex

pdflatex -interaction=nonstopmode -halt-on-error -output-directory=output presentation.tex
```

**Note:** The `output` directory must exist before running these commands.

Running twice ensures navigation and table-of-contents information is updated.

---

## ⚖️ Beamer vs Traditional Slide Editors

| Beamer | PowerPoint / Google Slides |
|---|---|
| Source-code-based authoring | Graphical drag-and-drop editing |
| Excellent for mathematical notation | Convenient visual editing |
| Consistent theme-based formatting | Flexible manual layout |
| Easy to review in Git | Collaboration through application-specific tools |
| Requires LaTeX familiarity | Lower barrier for beginners |

Neither approach is universally better. The choice depends on the presentation requirements.

---

## 🎯 Learning Outcomes

After completing this module, a learner should be able to:

- Create professional Beamer presentations.
- Structure slides using frames.
- Select and customize presentation themes.
- Demonstrate progressive overlays.
- Format mathematical and technical content.
- Create tables and column-based layouts.
- Compile LaTeX presentations into PDFs.
- Explain the source-to-output workflow.

---

## 📚 References

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
