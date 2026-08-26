
# CLI and Virtual Environment Basics

This summary outlines key takeaways from exploring the Linux command line, system environment variables, and Python package management. 

## 📂 File System & Navigation
* **Directory Listing:** Explored `pwd` to print working directories and used `ls` with various flags, including `-a` (reveal hidden files), `-l` (view file types, like `d` for directory, and permissions), and `-h` (display file sizes in a human-readable format).
* **Pathing:** Differentiated between absolute paths and relative paths (e.g., navigating directly to `coding-cafe/week02` from a parent directory).
* **File Manipulation:** Utilized the `mv` command for two distinct tasks: moving files into sub-directories and renaming files in place.

## 🌍 PATH & Virtual Environments
* **Environment Variables:** Analyzed the system `PATH` to understand how the shell searches through colon-separated directories from left to right to locate executables like `python3`. 
* **Troubleshooting:** Learned that "command not found" errors occur when the shell finishes searching the entire `PATH` without finding a matching executable for your input.
* **Hidden Environments:** Created a Python virtual environment (`python3 -m venv .venv`), noting that the `.` prefix keeps the folder hidden from a standard `ls` command.
* **Activation Mechanics:** Discovered that `activate` prepends the `.venv/bin` directory to the `PATH` and changes the terminal prompt. This ensures the shell prioritizes the virtual environment's binaries over global installations.
* **Package Management:** Installed the `requests` library, observed how `pip` automatically pulls in dependencies, and used the `deactivate` command to cleanly restore the original system `PATH`.

## ⌨️ Essential Shortcuts
* **Process Interruption (`Ctrl + C`):** Interrupts and kills the currently running process, returning control to the terminal prompt.
* **Terminal Exit (`Ctrl + D`):** Signals End-of-File (EOF) and cleanly exits the current terminal session.
README.md
Displaying README.md.