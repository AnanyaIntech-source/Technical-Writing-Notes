
# ⚙️ Doxygen — Automated Source Code Documentation

### Technical Writing Laboratory | MNIT Jaipur

> **Document the code. Explain the design. Make knowledge reusable.**

Doxygen is a documentation generator that reads specially formatted comments in source code and produces navigable reference documentation.

This module demonstrates its use with a small, working **C++ Student Record Management** example.

---

## 🔗 About Doxygen

Doxygen is widely used to generate API and source-code documentation for languages including C and C++.

Its output can include HTML pages, class references, function documentation, and source listings.

Documentation is written alongside the implementation so it can evolve with the code.

## 🎯 Objectives

- Explain the purpose of source-code documentation.
- Identify documentation comments and commonly used tags.
- Document C++ files, classes, methods, parameters, and return values.
- Configure Doxygen using a `Doxyfile`.
- Generate and inspect HTML documentation.
- Maintain documentation under Git version control.

---

## 📁 Files

| File | Purpose |
|---|---|
| [`notes.md`](notes.md) | Concepts, command reference, troubleshooting and viva questions |
| [`example.cpp`](example.cpp) | Compilable C++ student-record demonstration |
| [`Doxyfile`](Doxyfile) | Doxygen project configuration |
| [`generated-docs/README.md`](generated-docs/README.md) | Steps for creating generated HTML pages |
| [`screenshots/README.md`](screenshots/README.md) | Suggested screenshots for the class demonstration |

---

## 🧩 Key Concepts

### Documentation Comments

Doxygen recognizes special comment styles, including `/** ... */` and `///`.

These differ from ordinary comments because Doxygen can parse their content into structured documentation.

### Example

```cpp
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}
```

### Common Tags

| Tag | Use |
|---|---|
| `@file` | Document a source file |
| `@brief` | Short description |
| `@param` | Explain a function parameter |
| `@return` | Explain a return value |
| `@class` | Document a class explicitly |
| `@author` | Identify an author |
| `@date` | Specify a date |
| `@see` | Link related documentation |
| `@code` / `@endcode` | Show formatted code examples |

---

## 🛠️ Tools

| Tool | Role |
|---|---|
| C++17 compiler | Compile and test the example |
| Doxygen | Generate reference documentation |
| Web browser | View generated HTML pages |
| VS Code | Edit C++ and configuration files |
| Git / GitHub | Track and publish source and notes |

---

## 💻 Practical Implementation

### 1. Compile the C++ Program

From the `03-Doxygen` directory:

```bash
g++ -std=c++17 -Wall -Wextra example.cpp -o student-record
./student-record
```

On Windows with MinGW, run `student-record.exe` instead of `./student-record`.

### Sample Input

```text
Enter student name: Ananya
Enter roll number: 101
Enter marks (0-100): 86
```

### Expected Output

```text
Name: Ananya
Roll number: 101
Marks: 86
Result: Pass
```

---

### 2. Generate Documentation

Install Doxygen first, then run:

```bash
doxygen --version
doxygen Doxyfile
```

Open the following file in a web browser:

`generated-docs/html/index.html`

Explore the class reference, member descriptions, and source browser.

---

### 3. Understand the Workflow

```text
C++ Source Code
      |
      v
Doxygen-Style Comments
      |
      v
Doxyfile Configuration
      |
      v
doxygen Doxyfile
      |
      v
Generated HTML Documentation
      |
      v
Browser Inspection and Review
```

---

## 🔎 Practical Observations

- The `Student` class demonstrates constructor and member-function documentation.
- `@param` descriptions clarify input arguments.
- `@return` explains the meaning of `hasPassed()`'s Boolean result.
- `SOURCE_BROWSER = YES` exposes a browsable source view.
- Changing the source or comments requires regenerating the HTML output.

---

## 🎓 Learning Outcomes

After completing this module, a student should be able to:

- Write Doxygen documentation comments.
- Explain the purpose and structure of a Doxyfile.
- Generate HTML documentation from C++ source code.
- Navigate generated class and function references.
- Demonstrate the relationship between documented source code and generated reference pages.
- Maintain documentation using Git and GitHub.

---

## 📚 References

- [Doxygen Official Website](https://www.doxygen.nl/)
- [Doxygen Manual](https://www.doxygen.nl/manual/)
- [Documenting the Code](https://www.doxygen.nl/manual/docblocks.html)
- [Configuration Reference](https://www.doxygen.nl/manual/config.html)

---

## Contact

**Ananya Siju**  
[LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [GitHub](https://github.com/AnanyaIntech-source) | ananyasiju16@gmail.com

---

> **Author:** [Ananya Siju](https://github.com/AnanyaIntech-source)
> 
