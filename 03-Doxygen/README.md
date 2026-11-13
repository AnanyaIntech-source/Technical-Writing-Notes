
# ⚙️ Doxygen — Automated Source Code Documentation

### Technical Writing Laboratory | MNIT Jaipur

> **Document the code. Explain the design. Make knowledge reusable.**

Doxygen is a documentation generator that extracts specially formatted comments from source code to produce structured, navigable reference documentation.

This module demonstrates Doxygen through a practical **C++ Student Record Management** example, including source documentation, configuration, HTML generation, output verification, and viva preparation.

---

## About Doxygen

Doxygen is an automatic documentation generator. It parses source files and specially marked comments to produce organized reference documentation.

It is useful for documenting code APIs, classes, functions, parameters, return values, and relationships between code entities.

Unlike manually maintained reference documents, Doxygen can generate documentation directly from annotated source files.

**Important:** Doxygen generates documentation but does not execute or verify the correctness of the program.

### Learning Objectives

- Understand the purpose of automated source-code documentation.
- Identify Doxygen documentation comments and commonly used tags.
- Document C++ files, classes, constructors, methods, parameters, and return values.
- Configure documentation generation using a `Doxyfile`.
- Generate and navigate HTML documentation.
- Understand the difference between source comments and generated documentation.
- Maintain documented source code using Git and GitHub.

---

## Repository Structure

```text
03-Doxygen/
├── README.md
├── Doxyfile
├── mainpage.md
├── examples/
│   └── example.cpp
├── screenshots/
│   ├── 00-homepage.png
│   ├── 01-class-reference.png
│   ├── 02-constructor.png
│   ├── 03-function-documentation.png
│   └── 04-return-documentation.png
└── generated-docs/
    └── html/
        ├── index.html
        ├── search/
        ├── classes.html
        ├── files.html
        └── ... (other generated files)
```

### Project Resources

| Resource | Description |
|---|---|
| `README.md` | Complete Doxygen documentation, commands, troubleshooting, and viva questions |
| [C++ Source](examples/example.cpp) | Documented Student Record Management program |
| [Doxyfile](Doxyfile) | Documentation generator configuration |
| [Main Page](mainpage.md) | Content for the generated documentation homepage |
| [Generated Documentation](generated-docs/html/index.html) | HTML documentation entry point |
| [Screenshots](screenshots/) | Visual evidence of generated documentation |

**Note:** The HTML, CSS, and JavaScript files inside `generated-docs/html/` are generated automatically by Doxygen and should not be modified manually.

---

## Table of Contents

1. [Introduction to Doxygen](#1-introduction-to-doxygen)
2. [Tools and Requirements](#2-tools-and-requirements)
3. [Types of Documentation Comments](#3-types-of-documentation-comments)
4. [Frequently Used Doxygen Tags](#4-frequently-used-doxygen-tags)
5. [Documenting Functions](#5-documenting-functions)
6. [Documenting Classes](#6-documenting-classes)
7. [Doxyfile Configuration](#7-doxyfile-configuration)
8. [Practical Implementation](#8-practical-implementation)
9. [Documentation Workflow](#9-documentation-workflow)
10. [Git and Doxygen](#10-git-and-doxygen)
11. [Doxygen vs LaTeX vs Beamer](#11-doxygen-vs-latex-vs-beamer)
12. [Advantages and Limitations](#12-advantages-and-limitations)
13. [Common Errors and Troubleshooting](#13-common-errors-and-troubleshooting)
14. [Practical Observations](#14-practical-observations)
15. [Quick Viva Questions](#15-quick-viva-questions)
16. [Practical Checklist](#16-practical-checklist)
17. [Learning Outcomes](#17-learning-outcomes)
18. [References](#18-references)

---

## 1. Introduction to Doxygen

Doxygen is a documentation generator used to automatically produce reference documentation from source code.

It recognizes specially formatted comments and associates them with program elements such as classes, functions, variables, and files.

### Why Use Doxygen?

- Keeps technical descriptions close to code.
- Generates consistent, navigable documentation.
- Helps maintainers understand interfaces and expected behavior.
- Supports HTML output and optional LaTeX output.
- Can show source listings and relationships between code entities.
- Supports documentation maintenance through Git and GitHub.

### Key Concepts

| Concept | Description |
|---|---|
| Documentation Comments | Specially formatted comments recognized by Doxygen |
| Documentation Tags | Commands describing files, classes, functions, and parameters |
| Doxyfile | Configuration file controlling documentation generation |
| HTML Documentation | Navigable documentation viewed through a web browser |
| Source Browser | Allows users to inspect documented source code |
| Generated Documentation | Output automatically produced by Doxygen |

**Limitation:** Doxygen cannot guarantee that a comment is correct or that a program works. Documentation must still be reviewed and updated.

---

## 2. Tools and Requirements

| Tool | Purpose |
|---|---|
| C++17 Compiler | Compile and test the C++ example |
| Doxygen | Generate source-code documentation |
| VS Code | Edit source and configuration files |
| Web Browser | View generated HTML documentation |
| Git / GitHub | Version control and repository hosting |

### Check Doxygen Installation

```bash
doxygen --version
```

If Doxygen is installed correctly, the command displays its version number.

---

## 3. Types of Documentation Comments

Doxygen supports several documentation comment styles.

### Example

```cpp
// Ordinary C++ comment

/// Doxygen documentation for the next declaration
int value;

/**
 * Multi-line Doxygen documentation.
 */
void process();

/*! Alternative Doxygen documentation style. */
void update();
```

### Comment Style Comparison

| Comment Style | Purpose |
|---|---|
| `//` | Ordinary C++ comment |
| `///` | Single-line Doxygen documentation |
| `/** ... */` | Multi-line Doxygen documentation |
| `/*! ... */` | Alternative Doxygen documentation style |

Unlike ordinary comments, Doxygen documentation comments can be processed into structured documentation for classes, functions, parameters, and return values.

---

## 4. Frequently Used Doxygen Tags

Doxygen uses documentation tags to describe source-code elements.

### Common Documentation Tags

| Tag | Purpose | Example |
|---|---|---|
| `@file` | Identifies a source file | `@file example.cpp` |
| `@brief` | Provides a short description | `@brief Displays a student.` |
| `@param` | Documents a function parameter | `@param score Student marks.` |
| `@return` | Describes a return value | `@return true if passed.` |
| `@class` | Explicitly documents a class | `@class Student` |
| `@author` | Identifies the author | `@author Ananya Siju` |
| `@date` | Specifies a date | `@date 2026-10-29` |
| `@note` | Adds an explanatory note | `@note Marks range: 0–100.` |
| `@warning` | Highlights a warning | `@warning Check the input.` |
| `@see` | Links related documentation | `@see Student` |
| `@code` | Begins a formatted code example | `@code` |
| `@endcode` | Ends the formatted code example | `@endcode` |

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

### Explanation

- `@brief` describes the purpose of the function.
- `@param` explains the input parameters.
- `@return` describes the returned value.

---

## 5. Documenting Functions

Doxygen comments can explain a function's purpose, parameters, and return value.

### Example

```cpp
/**
 * @brief Calculates the square of a number.
 * @param number Input integer.
 * @return The square of the input.
 */
int square(int number) {
    return number * number;
}
```

### Explanation

| Tag | Description |
|---|---|
| `@brief` | Describes the function's purpose |
| `@param` | Explains the input parameter |
| `@return` | Explains the returned result |

**Note:** For large inputs, integer overflow is possible. Documentation comments do not eliminate program limitations.

---

## 6. Documenting Classes

Doxygen can document classes, constructors, member functions, and their parameters.

### Example

```cpp
/** @brief Represents a rectangular shape. */
class Rectangle {
public:
    /**
     * @brief Calculates the area.
     * @param width Rectangle width.
     * @param height Rectangle height.
     * @return width multiplied by height.
     */
    double area(double width, double height) const {
        return width * height;
    }
};
```

### Explanation

- The class-level comment describes `Rectangle`.
- The function-level comment describes `area()`.
- `@param` explains the width and height.
- `@return` describes the calculated area.

### Student Record Management Example

The practical project uses a `Student` class to demonstrate documentation of:

- Class descriptions.
- Constructors.
- Member functions.
- Function parameters.
- Return values.

The `hasPassed()` function demonstrates the use of `@return` to document a Boolean result.

**Source:** [example.cpp](examples/example.cpp)

---

## 7. Doxyfile Configuration

A `Doxyfile` specifies which files Doxygen should read, where output should be saved, and which formats should be generated.

### Common Configuration Options

| Option | Meaning |
|---|---|
| `PROJECT_NAME` | Name shown in documentation |
| `INPUT` | Source file or directory paths |
| `OUTPUT_DIRECTORY` | Output destination |
| `RECURSIVE` | Search nested directories when enabled |
| `EXTRACT_ALL` | Include entities even if they lack documentation |
| `GENERATE_HTML` | Enable HTML generation |
| `GENERATE_LATEX` | Enable LaTeX output |
| `SOURCE_BROWSER` | Provide browsable source listings |
| `GENERATE_TREEVIEW` | Add navigation tree to HTML |

### Generate a Default Doxyfile

```bash
doxygen -g Doxyfile
```

In this repository, a configured `Doxyfile` is already provided.

### Important Configuration Settings

Ensure that the configuration includes the required source files and output location.

```text
INPUT = examples/example.cpp mainpage.md

OUTPUT_DIRECTORY = generated-docs

GENERATE_HTML = YES

SOURCE_BROWSER = YES
```

### Generate Documentation

```bash
doxygen Doxyfile
```

The generated HTML documentation can be accessed through:

```text
generated-docs/html/index.html
```

---

## 8. Practical Implementation

**Project:** C++ Student Record Management — Technical Writing Laboratory

### Step 1: Compile the C++ Program

From the `03-Doxygen` directory:

```bash
g++ -std=c++17 -Wall -Wextra examples/example.cpp -o student-record
```

### Step 2: Run the Program

**Linux / macOS:**

```bash
./student-record
```

**Windows (MinGW / PowerShell):**

```powershell
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

### Step 3: Generate HTML Documentation

Verify the Doxygen installation:

```bash
doxygen --version
```

Generate the documentation:

```bash
doxygen Doxyfile
```

### Step 4: Open the Documentation

Open:

```text
generated-docs/html/index.html
```

Explore the generated documentation, including:

1. Documentation homepage.
2. Class reference.
3. Constructor documentation.
4. Member function documentation.
5. Return value documentation.
6. Source-code browser.

### Step 5: Verify the Output

Compare the generated HTML pages with the documented C++ source code.

Review the screenshots stored inside the `screenshots/` directory.

**Important:** Modifying source code or documentation comments requires regenerating the HTML documentation.

---

## 9. Documentation Workflow

Doxygen converts documented source code into structured reference documentation.

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

### Workflow Explanation

1. Write the C++ source code.
2. Add Doxygen documentation comments.
3. Configure the `Doxyfile`.
4. Run the Doxygen generator.
5. Open the generated HTML documentation.
6. Verify classes, functions, parameters, and return values.
7. Regenerate documentation whenever the source changes.

---

## 10. Git and Doxygen

Git helps maintain source code and documentation throughout development.

### Files to Track

| File | Purpose |
|---|---|
| `examples/example.cpp` | Documented C++ source code |
| `Doxyfile` | Doxygen configuration |
| `README.md` | Module documentation |
| `mainpage.md` | Generated documentation homepage content |
| `screenshots/` | Visual evidence of documentation |

### Generated Documentation

Generated HTML documentation can be regenerated and is often excluded from version control.

Commit generated HTML when it is specifically required for publishing static documentation or demonstrating the output.

This module includes `generated-docs/html/` as part of its documented project structure.

**Important:** Source-code documentation comments and generated documentation are not the same thing.

---

## 11. Doxygen vs LaTeX vs Beamer

| Tool | Main Purpose | Typical Output |
|---|---|---|
| Doxygen | Source code/API documentation | HTML, optionally LaTeX |
| LaTeX | Typesetting structured documents | PDF |
| Beamer | Presentation authoring with LaTeX | Presentation PDF |

### Key Differences

**Doxygen:** Generates documentation from source code and structured comments.

**LaTeX:** Produces professionally formatted technical documents.

**Beamer:** Creates slide presentations using LaTeX.

---

## 12. Advantages and Limitations

| Advantages | Limitations |
|---|---|
| Automatically generates structured documentation | Cannot guarantee documentation accuracy |
| Keeps documentation close to source code | Requires well-written documentation comments |
| Supports navigable HTML documentation | Generated files must be updated after changes |
| Documents classes, functions, and parameters | Configuration may require initial setup |
| Supports source browsing | Does not execute or test program functionality |
| Integrates with Git and GitHub | Generated documentation may require additional storage |

---

## 13. Common Errors and Troubleshooting

### Error 1: `doxygen: command not found`

**Cause:** Doxygen is not installed or is not available on the system PATH.

**Solution:** Install Doxygen and ensure it is correctly configured.

### Error 2: Missing Class in Generated Documentation

**Cause:** Incorrect input settings, missing documentation comments, or extraction settings.

**Solution:** Check `INPUT`, documentation comments, and extraction options.

### Error 3: HTML File Not Found

**Cause:** Documentation was not generated or the output path is incorrect.

**Solution:** Run:

```bash
doxygen Doxyfile
```

Check the `OUTPUT_DIRECTORY` configuration.

### Error 4: Changes Not Visible

**Cause:** Documentation has not been regenerated.

**Solution:** Run Doxygen again and refresh the browser.

### Troubleshooting Checklist

- Verify that Doxygen is installed.
- Check the `INPUT` paths in `Doxyfile`.
- Confirm that documentation comments use valid syntax.
- Verify the output directory.
- Regenerate documentation after modifying the source.
- Inspect warnings displayed during documentation generation.
- Refresh the browser when reviewing updated HTML pages.

---

## 14. Practical Observations

- The `Student` class demonstrates documentation of constructors and member functions.
- `@param` tags explain function parameters.
- `@return` describes the Boolean result of `hasPassed()`.
- `SOURCE_BROWSER = YES` enables browsing documented source code.
- Modifying source code or documentation comments requires regenerating the HTML documentation.
- The generated HTML documentation provides a structured reference for the C++ program.

---

## 15. Quick Viva Questions

### Conceptual Questions

**Q1. What is Doxygen?**

A tool that generates documentation from source code and structured comments.

**Q2. Why is Doxygen useful?**

It produces consistent, navigable API references and keeps documentation close to implementation.

**Q3. What is a Doxyfile?**

A configuration file controlling Doxygen's inputs, outputs, and options.

**Q4. What does `@brief` do?**

Provides a short description of a code entity.

**Q5. What is `@param`?**

A tag explaining a function parameter.

**Q6. What is `@return`?**

A tag describing a function's return value.

**Q7. How do you generate HTML documentation?**

Enable `GENERATE_HTML = YES` and run:

```bash
doxygen Doxyfile
```

**Q8. Does Doxygen execute C++ code?**

No. It analyzes source and comments to generate documentation.

**Q9. What is the difference between `//` and `///`?**

`//` is a regular comment, while `///` is a recognized Doxygen documentation comment.

**Q10. What is `EXTRACT_ALL`?**

A configuration option to include code entities even if they lack documentation comments.

**Q11. Can Doxygen generate PDF directly?**

Doxygen can generate LaTeX output, which may then be compiled into PDF. HTML is generated directly.

**Q12. Why use Git with Doxygen?**

Git tracks changes to source code, configuration, and documentation.

**Q13. What does `SOURCE_BROWSER` do?**

Includes browsable source code in the generated documentation.

**Q14. Is Doxygen documentation always accurate?**

No. It depends on the quality and currency of source comments.

**Q15. What is the key distinction between Doxygen and Beamer?**

Doxygen documents code interfaces, while Beamer creates presentations.

---

## 16. Practical Checklist

### Hands-on Tasks

- [ ] Verify that Doxygen is installed.
- [ ] Read and understand `examples/example.cpp`.
- [ ] Identify Doxygen comments in the source code.
- [ ] Explain the purpose of `@brief`, `@param`, and `@return`.
- [ ] Compile and run the C++ program.
- [ ] Inspect the `Doxyfile` configuration.
- [ ] Generate HTML documentation using Doxygen.
- [ ] Open the generated documentation homepage.
- [ ] Verify class, constructor, and function documentation.
- [ ] Modify a documentation comment and regenerate the output.
- [ ] Explain the difference between source comments and generated HTML.
- [ ] Demonstrate version control using Git.

**Source Code:** [example.cpp](examples/example.cpp)

**Configuration:** [Doxyfile](Doxyfile)

**Generated Documentation:** [index.html](generated-docs/html/index.html)

---

## 17. Learning Outcomes

Through this module, I learned to:

- Understand automated source-code documentation.
- Write Doxygen comments for C++ classes and functions.
- Document parameters and return values.
- Configure documentation generation using a `Doxyfile`.
- Generate structured HTML reference documentation.
- Navigate class references, constructors, and member functions.
- Troubleshoot common documentation generation errors.
- Maintain source code and documentation using Git and GitHub.

The practical demonstrates how documentation can be maintained alongside source code and regenerated whenever the implementation changes.

---

## 18. References

1. [Doxygen — Official Website](https://www.doxygen.nl/)
2. [Doxygen — User Manual](https://www.doxygen.nl/manual/)
3. [Doxygen — Documenting the Code](https://www.doxygen.nl/manual/docblocks.html)
4. [Doxygen — Configuration Reference](https://www.doxygen.nl/manual/config.html)

---

## 👩‍💻 Author

**Ananya Siju**

[GitHub](https://github.com/AnanyaIntech-source) | [LinkedIn](https://www.linkedin.com/in/ananya-siju-a04835291/) | [Email](mailto:ananyasiju16@gmail.com)
