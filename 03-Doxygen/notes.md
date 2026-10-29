
# 📖 Doxygen — Detailed Notes and Viva Preparation

## 1. What is Doxygen?

Doxygen is an automatic documentation generator. It parses source files and specially marked comments to produce organized reference documentation.

It is useful for documenting code APIs, classes, functions, and their relationships.

## 2. Why Use Doxygen?

- Keeps technical descriptions close to code.
- Generates consistent navigable documentation.
- Helps maintainers understand interfaces and expected behavior.
- Supports HTML output and optional LaTeX output.
- Can show source listings and relationships between code entities.

**Limitation:** Doxygen cannot guarantee that a comment is correct or that a program works. Documentation must still be reviewed and updated.

---

## 3. Types of Comments

Doxygen supports several documentation comment styles.

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

### Explanation

| Comment Style | Purpose |
|---|---|
| `//` | Ordinary C++ comment |
| `///` | Single-line Doxygen documentation |
| `/** ... */` | Multi-line Doxygen documentation |
| `/*! ... */` | Alternative Doxygen documentation style |

---

## 4. Frequently Used Tags

| Command | Explanation | Example |
|---|---|---|
| `@file` | Identifies a file | `@file example.cpp` |
| `@brief` | Gives a short summary | `@brief Displays a student.` |
| `@param` | Documents a parameter | `@param score Student marks.` |
| `@return` | Describes returned value | `@return true if passed.` |
| `@author` | Names the author | `@author Ananya Siju` |
| `@date` | Adds a date | `@date 2026-10-29` |
| `@note` | Adds a note | `@note Marks range: 0–100.` |
| `@warning` | Highlights a warning | `@warning Check the input.` |
| `@see` | Refers to related content | `@see Student` |
| `@code` | Begins a code example | `@code` |
| `@endcode` | Ends the code example | `@endcode` |

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

- `@brief` describes the function.
- `@param` explains the input parameter.
- `@return` explains the returned result.

**Note:** For large inputs, integer overflow is possible. Documentation comments do not eliminate program limitations.

---

## 6. Documenting Classes

Doxygen can document classes and their member functions.

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

Generate documentation using:

```bash
doxygen Doxyfile
```

---

## 8. Practical Commands

### Check Doxygen Installation

```bash
doxygen --version
```

### Generate Documentation

```bash
doxygen Doxyfile
```

### Compile the C++ Program

```bash
g++ -std=c++17 -Wall -Wextra example.cpp -o student-record
```

### Run on macOS/Linux

```bash
./student-record
```

### Run on Windows PowerShell

```powershell
.\student-record.exe
```

---

## 9. Git and Doxygen

Git helps maintain the source code and documentation throughout development.

### Files to Track

- `example.cpp`
- `Doxyfile`
- `README.md`
- `notes.md`

Generated HTML documentation can be regenerated and is often excluded from version control.

Commit generated HTML only when it is specifically required for publishing static documentation.

**Important:** Source-code documentation comments and generated documentation are not the same thing.

---

## 10. Doxygen vs LaTeX vs Beamer

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

## 11. Troubleshooting

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

---

## 12. Viva Questions and Short Answers

### Q1. What is Doxygen?
A tool that generates documentation from source code and structured comments.

### Q2. Why is Doxygen useful?
It produces consistent, navigable API references and keeps documentation close to implementation.

### Q3. What is a Doxyfile?
A configuration file controlling Doxygen's inputs, outputs, and options.

### Q4. What does `@brief` do?
Provides a short description of a code entity.

### Q5. What is `@param`?
A tag explaining a function parameter.

### Q6. What is `@return`?
A tag describing a function's return value.

### Q7. How do you generate HTML documentation?
Enable `GENERATE_HTML = YES` and run:

```bash
doxygen Doxyfile
```

### Q8. Does Doxygen execute C++ code?
No. It analyzes source and comments to generate documentation.

### Q9. What is the difference between `//` and `///`?
`//` is a regular comment, while `///` is a recognized Doxygen documentation comment.

### Q10. What is `EXTRACT_ALL`?
A configuration option to include code entities even if they lack documentation comments.

### Q11. Can Doxygen generate PDF directly?
Doxygen can generate LaTeX output, which may then be compiled into PDF. HTML is generated directly.

### Q12. Why use Git with Doxygen?
Git tracks changes to source code, configuration, and documentation.

### Q13. What does `SOURCE_BROWSER` do?
Includes browsable source code in the generated documentation.

### Q14. Is Doxygen documentation always accurate?
No. It depends on the quality and currency of source comments.

### Q15. What is the key distinction between Doxygen and Beamer?
Doxygen documents code interfaces, while Beamer creates presentations.

---

## 13. References

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
