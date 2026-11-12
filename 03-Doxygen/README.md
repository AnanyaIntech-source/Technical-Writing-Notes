
# ⚙️ Doxygen — Automated Source Code Documentation

> **Document the code. Explain the design. Make knowledge reusable.**

Doxygen is a documentation generator that extracts specially formatted comments from source code to produce structured, navigable reference documentation.

This module demonstrates Doxygen through a practical **C++ Student Record Management** example, including source documentation, configuration, HTML generation, and output verification.

## 🎯 Learning Objectives

- Understand the purpose of automated source-code documentation.
- Identify Doxygen documentation comments and commonly used tags.
- Document C++ files, classes, constructors, methods, parameters, and return values.
- Configure documentation generation using a `Doxyfile`.
- Generate and navigate HTML documentation.
- Maintain documented source code using Git and GitHub.

---

## 📂 Contents

| Resource | Description |
|---|---|
| [Detailed Notes](notes.md) | Concepts, commands, troubleshooting, and viva questions |
| [C++ Source](examples/example.cpp) | Documented Student Record Management program |
| [Doxyfile](Doxyfile) | Documentation generator configuration |
| [Main Page](mainpage.md) | Content for the generated documentation homepage |
| [Generated Documentation](generated-docs/html/index.html) | HTML documentation entry point |
| [Screenshots](screenshots/) | Visual evidence of generated documentation |

---

## 📂 Repository Structure

The module separates source code, configuration, reference notes, screenshots, and automatically generated documentation.

```text
03-Doxygen/
│
├── README.md
├── notes.md
├── Doxyfile
├── mainpage.md
│
├── examples/
│   └── example.cpp
│
├── screenshots/
│   ├── 00-homepage.png
│   ├── 01-class-reference.png
│   ├── 02-constructor.png
│   ├── 03-function-documentation.png
│   └── 04-return-documentation.png
│
└── generated-docs/
    └── html/
        ├── index.html
        ├── search/
        ├── classes.html
        ├── files.html
        └── ... (other generated files)
```

**Note:** The HTML, CSS, and JavaScript files inside `generated-docs/html/` are generated automatically by Doxygen and should not be modified manually.

---

## 🧩 Key Concepts

### Documentation Comments

Doxygen recognizes specially formatted comments such as `/** ... */` and `///`.

Unlike ordinary comments, these can be processed into structured documentation for classes, functions, parameters, and return values.

### 💻 Example

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

### 🔍 Common Documentation Tags

| Tag | Purpose |
|---|---|
| `@file` | Documents a source file |
| `@brief` | Provides a short description |
| `@param` | Describes a function parameter |
| `@return` | Describes a return value |
| `@class` | Explicitly documents a class |
| `@author` | Identifies the author |
| `@date` | Specifies a date |
| `@see` | Links related documentation |
| `@code` / `@endcode` | Formats code examples |

---

## 🛠️ Tools and Requirements

| Tool | Purpose |
|---|---|
| C++17 Compiler | Compile and test the C++ example |
| Doxygen | Generate source-code documentation |
| VS Code | Edit source and configuration files |
| Web Browser | View generated HTML documentation |
| Git / GitHub | Version control and repository hosting |

---

## 💻 Practical Implementation

### 1. Compile the C++ Program

From the `03-Doxygen` directory:

```bash
g++ -std=c++17 -Wall -Wextra examples/example.cpp -o student-record
```

Run the program:

**Linux / macOS:**

```bash
./student-record
```

**Windows (MinGW):**

```bash
.\student-record.exe
```

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

### 2. Generate Documentation

Install Doxygen and verify the installation:

```bash
doxygen --version
```

Generate the HTML documentation:

```bash
doxygen Doxyfile
```

Open the generated homepage:

```text
generated-docs/html/index.html
```

Explore the class reference, constructors, member functions, and source-code documentation.

**Important:** Ensure that the `INPUT` setting in `Doxyfile` includes `examples/example.cpp` and `mainpage.md`, and that `OUTPUT_DIRECTORY` is set to `generated-docs`.

### 3. Documentation Workflow

```text
C++ Source Code
       |
       v
Doxygen Documentation Comments
       |
       v
Doxyfile Configuration
       |
       v
Run: doxygen Doxyfile
       |
       v
Generated HTML Documentation
       |
       v
Browser Inspection and Review
```

## 🔎 Practical Observations

- The `Student` class demonstrates documentation of constructors and member functions.
- `@param` tags explain function parameters.
- `@return` describes the Boolean result of `hasPassed()`.
- `SOURCE_BROWSER = YES` enables browsing documented source code.
- Modifying source code or documentation comments requires regenerating the HTML documentation.

---

## 🎓 Learning Outcomes

Through this module, I learned to document C++ source code using Doxygen comments, configure documentation generation, and create navigable HTML reference pages.

The practical demonstrates how documentation can be maintained alongside source code using Git and GitHub.

---

## 📚 References

- [Doxygen — Official Website](https://www.doxygen.nl/)
- [Doxygen — User Manual](https://www.doxygen.nl/manual/)
- [Doxygen — Documenting the Code](https://www.doxygen.nl/manual/docblocks.html)
- [Doxygen — Configuration Reference](https://www.doxygen.nl/manual/config.html)

---

## 👩‍💻 Author

**Ananya Siju**

[GitHub](https://github.com/AnanyaIntech-source) | [LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [Email](mailto:ananyasiju16@gmail.com)
