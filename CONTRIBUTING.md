# Contributing Guide

Thank you for your interest in contributing to this repository! ❤️

This repository is a programming learning repository created to practice different programming languages, understand their syntax, explore programming concepts, and build small programs and exercises.

The main goal of this repository is to create a structured learning resource that can also be used for future revision.

Contributions are welcome from anyone who wants to improve the learning content, add useful examples, fix mistakes, or introduce new programming concepts.

---

## 📌 About This Repository

This repository contains examples and practice programs from different programming languages.

Each programming language is organized into its own directory.

For example:

```text
.
├── C++/
├── HTML, CSS & JS/
├── Java/
├── Python/
├── R/
├── Ruby/
└── README.md
```

Each language directory contains files organized in a sequential learning order.

For example:

```text
Ruby/
├── 00_Introduction.rb
├── 01_data_types.rb
├── 02_arithmetic_operations.rb
├── 03_interpolation.rb
├── 04_casting.rb
├── 05_strings.rb
├── 06_string_methods_bang.rb
└── 07_strings_as_array.rb
```

The numbering system is used to maintain a clear learning progression.

---

# 🤝 How Can You Contribute?

There are several ways you can contribute to this repository.

You can contribute by:

- Adding new programming languages
- Adding missing programming concepts
- Adding beginner-friendly examples
- Adding intermediate-level examples
- Adding advanced concepts
- Adding programming exercises
- Adding small projects
- Fixing incorrect code
- Fixing syntax errors
- Improving existing examples
- Improving comments
- Improving documentation
- Fixing spelling or grammar mistakes
- Improving code formatting
- Suggesting better learning sequences
- Adding useful explanations
- Improving the repository structure

Every useful contribution is welcome as long as it follows the purpose and structure of the repository.

---

# 📂 Repository Structure

Each programming language should have its own directory.

Example:

```text
Python/
C++/
Java/
Ruby/
R/
JavaScript/
```

The directory name should clearly represent the programming language or technology.

Inside each directory, topics should generally be organized from basic to advanced.

Example:

```text
Python/
├── 00_introduction.py
├── 01_data_types.py
├── 02_operators.py
├── 03_conditionals.py
├── 04_loops.py
├── 05_functions.py
├── 06_lists.py
├── 07_tuples.py
├── 08_sets.py
├── 09_dictionaries.py
├── 10_strings.py
├── 11_exceptions.py
├── 12_modules.py
├── 13_oop.py
└── ...
```

The exact structure can be different for each language because different programming languages have different concepts and learning paths.

---

# 🔢 File Naming Convention

Files should follow a numbered naming convention whenever possible.

Recommended format:

```text
NN_topic_name.extension
```

For example:

```text
00_introduction.py
01_data_types.py
02_arithmetic_operations.py
03_conditional_statements.py
04_loops.py
05_functions.py
```

For Ruby:

```text
00_Introduction.rb
01_data_types.rb
02_arithmetic_operations.rb
03_interpolation.rb
```

For C++:

```text
00_introduction.cpp
01_variables.cpp
02_data_types.cpp
03_operators.cpp
```

For Java:

```text
00_Introduction.java
01_DataTypes.java
02_Operators.java
```

Use the naming style that is already established in the respective language directory.

---

# 🧭 Topic Ordering

Topics should preferably follow a logical learning progression.

A typical progression may look like:

```text
Introduction
      ↓
Variables
      ↓
Data Types
      ↓
Input / Output
      ↓
Operators
      ↓
Conditional Statements
      ↓
Loops
      ↓
Functions / Methods
      ↓
Strings
      ↓
Arrays / Collections
      ↓
Data Structures
      ↓
Exception Handling
      ↓
Modules / Packages
      ↓
Object-Oriented Programming
      ↓
Advanced Concepts
      ↓
Projects / Exercises
```

This is only a general guideline.

The learning order can be adjusted according to the programming language.

---

# 💻 Code Guidelines

Code added to this repository should be:

- Simple
- Readable
- Correct
- Beginner-friendly
- Properly formatted
- Focused on the topic being demonstrated
- Consistent with the programming language

Avoid unnecessary complexity.

For example, if the purpose of a file is to demonstrate variables, the example should primarily focus on variables rather than introducing advanced concepts.

### Good Example

```python
name = "John"
age = 20

print(name)
print(age)
```

### Avoid unnecessary complexity

Do not introduce frameworks, external libraries, advanced patterns, or complicated abstractions unless they are required for the topic.

---

# 📝 Comments and Explanations

Comments can be added when they help explain an important concept.

For example:

```python
# A list can contain multiple values
numbers = [10, 20, 30, 40]

print(numbers)
```

Avoid adding comments that simply repeat obvious code.

For example:

```python
# Create a variable called name
name = "John"
```

Comments should provide useful learning information whenever possible.

---

# 🧪 Testing Your Code

Before submitting a contribution, make sure the code works correctly.

Run the program using the appropriate compiler or interpreter.

For example:

### Python

```bash
python filename.py
```

### Ruby

```bash
ruby filename.rb
```

### Java

```bash
javac Main.java
java Main
```

### C++

```bash
g++ filename.cpp -o program
./program
```

The exact command may vary depending on the operating system and development environment.

---

# 🚫 Avoid Unnecessary Dependencies

This repository primarily focuses on programming fundamentals.

Avoid adding external dependencies unless they are necessary for the topic.

For example, if a concept can be demonstrated using the standard library, prefer the standard library rather than adding an external package.

If an external dependency is required, clearly mention it in the relevant documentation.

---

# 📚 Adding Exercises

Exercises are encouraged because they help reinforce programming concepts.

An exercise should ideally include:

1. A clear problem statement
2. Input requirements, if applicable
3. Expected output
4. Example input/output, if useful
5. A solution or reference implementation when appropriate

Example:

```text
Exercise: Find the largest number in an array.

Input:
[10, 25, 5, 40, 15]

Expected Output:
40
```

Keep exercises appropriate for the topic being covered.

---

# 🏗️ Adding Small Projects

Small projects can also be added to demonstrate practical usage of a language.

Examples:

```text
Calculator
Number Guessing Game
Todo List
Contact Book
Quiz Application
Temperature Converter
File Organizer
```

Projects should preferably be placed in an appropriate project directory rather than mixing multiple project files with basic syntax examples.

Example:

```text
Python/
├── 00_introduction.py
├── 01_data_types.py
├── ...
└── projects/
    ├── calculator/
    ├── number_guessing_game/
    └── todo_app/
```

---

# 🌐 Adding a New Programming Language

If you want to add a new programming language, create a new directory using the language name.

Example:

```text
Go/
Rust/
Kotlin/
Swift/
PHP/
JavaScript/
```

Start with fundamental concepts.

For example:

```text
Go/
├── 00_introduction.go
├── 01_variables.go
├── 02_data_types.go
├── 03_operators.go
├── 04_conditionals.go
├── 05_loops.go
└── ...
```

Try to maintain the same structured learning approach used by the existing language directories.

---

# 🌱 Improving Existing Code

Existing code can be improved if the change makes it:

- More readable
- More accurate
- More beginner-friendly
- More idiomatic for the language
- Better documented
- Easier to understand

When modifying existing examples, avoid changing the purpose of the example unnecessarily.

For example, if a file demonstrates a specific language feature, keep that feature as the primary focus.

---

# 🐛 Reporting Bugs or Incorrect Examples

If you find an incorrect example, syntax error, broken program, or misleading explanation, please report it.

A useful issue should include:

### Description

Explain what is wrong.

### Location

Mention the language and file.

Example:

```text
Ruby/05_strings.rb
```

### Problem

Explain what happens.

### Expected Behavior

Explain what should happen instead.

### Additional Information

Include error messages or screenshots if they are useful.

---

# 🌿 Branching Guidelines

When contributing changes, create a separate branch instead of making changes directly to the main branch.

Example:

```bash
git checkout -b feature/add-python-loops
```

Other examples:

```bash
feature/add-ruby-arrays
fix/python-example
docs/update-readme
refactor/java-examples
```

Use a descriptive branch name that explains the purpose of the changes.

---

# 💾 Commit Message Guidelines

Commit messages should clearly describe what was changed.

Recommended format:

```text
type: short description
```

Common commit types include:

### feat

Used when adding a new feature or learning topic.

```text
feat: add Ruby arrays examples
```

### fix

Used when fixing an error or incorrect behavior.

```text
fix: correct Ruby string interpolation example
```

### docs

Used for documentation changes.

```text
docs: update Ruby learning guide
```

### refactor

Used when restructuring code without changing its behavior.

```text
refactor: simplify Python loop examples
```

### style

Used for formatting or style-only changes.

```text
style: format C++ examples
```

### chore

Used for maintenance tasks that do not directly change the learning content.

```text
chore: reorganize Ruby files
```

### test

Used when adding or modifying tests.

```text
test: add tests for calculator
```

### Example

Instead of:

```text
updated files
```

Prefer:

```text
feat: add Ruby hash examples
```

---

# 🔀 Pull Request Guidelines

When your changes are ready, open a Pull Request.

A Pull Request should clearly explain:

- What you changed
- Why you changed it
- Which programming language is affected
- Which topics were added or modified
- Whether the code was tested

### Example Pull Request Title

```text
Add Ruby Arrays and Hashes examples
```

### Example Description

```text
## Changes

Added beginner-friendly Ruby examples for:

- Arrays
- Array indexing
- Array methods
- Hashes
- Hash access
- Basic Hash methods

## Testing

All Ruby examples were tested locally.

## Checklist

- [x] Code tested
- [x] File naming convention followed
- [x] Existing structure maintained
- [x] No unnecessary dependencies added
```

---

# ✅ Contribution Checklist

Before opening a Pull Request, make sure:

- [ ] The code runs correctly.
- [ ] The code follows the language's syntax and conventions.
- [ ] The file is placed in the correct directory.
- [ ] The file name follows the repository convention.
- [ ] The topic is appropriate for the selected language.
- [ ] The learning progression is maintained.
- [ ] The example is easy to understand.
- [ ] Unnecessary complexity has been avoided.
- [ ] Unnecessary dependencies have not been added.
- [ ] Existing examples have not been accidentally modified.
- [ ] Comments are useful and relevant.
- [ ] Documentation has been updated when necessary.
- [ ] The commit message is clear.
- [ ] The Pull Request description explains the changes.

---

# 🎯 Contribution Principles

The purpose of this repository is learning.

When contributing, keep the following principles in mind:

### 1. Keep It Simple

Prefer simple examples that clearly demonstrate the concept.

### 2. Focus on Learning

Every example should help someone understand a programming concept.

### 3. Follow the Structure

Maintain the existing folder and file organization.

### 4. Write Readable Code

Code should be understandable by someone learning the language.

### 5. Avoid Unnecessary Complexity

Do not use advanced techniques when a basic solution is sufficient for the topic.

### 6. Prefer Practical Examples

Whenever possible, demonstrate concepts using small and meaningful examples.

### 7. Keep Examples Independent

A beginner should ideally be able to open an individual file and understand what it demonstrates without needing to inspect many other files.

---

# 📖 Documentation Guidelines

Documentation should be clear and concise.

When adding documentation:

- Use clear headings.
- Use code blocks for code examples.
- Explain important concepts.
- Avoid unnecessary repetition.
- Keep terminology technically accurate.

Markdown should be used for repository documentation.

---

# 🔍 Code Quality

Before submitting code, consider:

```text
Is the code correct?
        ↓
Is the code readable?
        ↓
Is the example focused on one concept?
        ↓
Does it follow the language's conventions?
        ↓
Does it fit the learning progression?
        ↓
Can a beginner understand it?
```

If the answer is yes, the contribution is likely a good fit for this repository.

---

# 💡 Suggestions

Suggestions for improving the repository are welcome.

You can suggest:

- New programming languages
- New topics
- Better examples
- New exercises
- New projects
- Documentation improvements
- Better repository organization

Please provide enough information so the suggestion can be understood and evaluated easily.

---


# 📦 Generated Files

Avoid committing unnecessary generated files such as:

```text
__pycache__/
*.pyc
node_modules/
.env
*.log
build/
dist/
```

Use the appropriate `.gitignore` file for the language or project when necessary.

---

# 🔄 Keeping Your Branch Updated

Before submitting a Pull Request, make sure your branch is reasonably up to date with the main branch.

For example:

```bash
git checkout main
git pull origin main

git checkout your-branch
git merge main
```

Resolve any conflicts before submitting the Pull Request.

---

# 🧹 Keeping the Repository Clean

Please do not commit files that are unrelated to the contribution.

Avoid committing:

- IDE configuration files
- Operating system generated files
- Temporary files
- Compiled binaries
- Debug files
- Personal configuration files
- Secrets or credentials

unless they are specifically required by the project.

---

# 🏆 What Makes a Good Contribution?

A good contribution should generally be:

```text
Correct
  +
Readable
  +
Educational
  +
Well Organized
  +
Consistent
  =
Useful Contribution
```

The goal is not to add as much code as possible.

The goal is to add code that provides learning value.

---

# 🙌 Thank You

Thank you for taking the time to contribute to this repository.

Whether you are fixing a small typo, adding a programming example, introducing a new language, or creating a useful exercise, every meaningful contribution helps improve this learning resource.

Happy Coding! 🚀