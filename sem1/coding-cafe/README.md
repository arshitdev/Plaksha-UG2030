# Coding Cafe — Semester 1

This repository tracks my Coding Cafe lab work, from getting comfortable with the terminal to writing interactive Python programs in Jupyter notebooks.

## Progress so far

| Work | What I practiced |
| --- | --- |
| [Week 1: Hello Python](week01/hello.py) | Wrote a first Python script that prints a greeting. |
| [Week 2: Terminal notes](week02/notes.md) | Explored navigation, file listings, relative paths, `mv`, `PATH`, virtual environments, package installation, and terminal shortcuts. |
| [Week 3: Python basics](week03/lab2_cc_2026.ipynb) | Used Jupyter code and Markdown cells; worked with variables, `int`/`float`/`bool`/`str`, type casting, arithmetic, comparisons, string operations, and `input()`. |
| [Lab 3: Conditionals and loops](lab03/lab3-final-assignment.ipynb) | Wrote exercises using `if`/`elif`/`else`, Boolean logic, `for` and `while` loops, `range()`, `break`, `continue`, and a conditional expression. |

The Lab 3 notebook includes a ship classifier, a triangle classifier, an escape pod decision, a number guessing game, a vowel counter, and a longer goblin alchemy exercise.

## Files

```text
coding-cafe/
├── README.md
├── week01/
│   └── hello.py
├── week02/
│   ├── lab01-log.txt
│   └── notes.md
├── week03/
│   └── lab2_cc_2026.ipynb
└── lab03/
    └── lab3-final-assignment.ipynb
```

`week02/lab01-log.txt` is a saved terminal history. It includes commands from outside this coursework as well as the Week 2 lab, so [the notes](week02/notes.md) are the more focused record of what I learned there.

## Running the work

Run the Week 1 script from the repository root:

```bash
python3 week01/hello.py
```

Open either `.ipynb` file in Jupyter or an editor that supports notebooks and run cells as you work through it. The notebooks use interactive `input()` prompts. The Week 3 notebook also contains experiments with invalid syntax, so some cells are meant to produce errors.
