### Q1) What did `pwd` print?
> **Ans :** The command `pwd` prints the current working directory.
> For me, it gave the following output :
> `/home/professional`
---

### Q2) What did `ls -a` show that plain `ls` did not?
> **Ans :** The command `ls` lists the contents of the current directory, but there are some hidden files which aren't meant to be shown directly.
> When you run the command `ls -a`, it shows all the hidden files like `.git, .ssh, .oh-my-zsh,  .vscode, .steam`, etc. 

---

### Q3) Pick one line from `ls -l`. What do you think the first column means?
> **Ans :** The line from my output is the following -> `drwxr-xr-x 1 professional professional   62 Aug 18 10:32 dev`
> The first column represents whether the item is a file or a directory.
> In this case, it shows 'd', which is correct as 'dev' is a directory in my system. 

---

### Q4) Why does that work from where you are standing? Which kind of path is `coding-cafe/week02`? Absolute or Relative?
> **Ans :** The path `coding-cafe/week02` is a relative path. This works because when we executed the `cd ~` it took us to the home folder. The `ls` showed us that it contains directory _'coding-cafe'_. Since we are in this directory, the command `ls coding-cafe/week02` works because it knows to look in the present directory.

---

### Q5) `mv` did two different jobs above. What were they?
> **Ans :** In the command `mv README-backup.md week01/` it moved the file _'README-backup.md'_ into the sub-directory _'week01_'.
> In the command `mv README-backup.md old-readme.md` it basically renamed the file _'README-backup.md'_ into _'old-readme.md'_.

---

### Q6) How many folders are on your `PATH`? (They are separated by `:`)
> **Ans :** I have 11 folders in my PATH. Here is the output I got after I ran it ->
> ```bash
> {/home/professional/.local/bin:/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:
> /var/lib/flatpak/exports/bin:/usr/lib/jvm/default/bin:/usr/bin/site_perl:
> /usr/bin/vendor_perl:/usr/bin/core_perl:/var/lib/snapd/snap/bin}
> ```

---

### Q7) Write down exactly where your `python3` lives. You will need this again in a minute.
> **Ans :** For me, my python3 lives in : `/usr/bin/python3`.

---

### Q8) Compare your answer to 7 with the person next to you. Are they the same? If not, why might that be?
> **Ans :** Yes, it is the same (PS: I am on linux, person next to me is on WSL)

---

### Q9) What exactly did the shell say? Explain the error in your own words, using the word **PATH**.
> **Ans :** The shell responded with `zsh: command not found: pyton3`.
> The error, in terms of PATH, is that when I typed `pyton3`, the shell checked through the entire PATH and through every directory to find some file containing an executable command `pyton3` but it couldn't find it (clearly because we misspelled).
> That is why the shell gave that error.  

---

### Q10) `.venv` did not appear with plain `ls`. Why not? (Refer back to section 1.)
> **Ans :** This is because in Linux, any file starting with a `.` is treated as a hidden file. When we ran the command `python3 -m venv .venv` it generated a virtual environment in the file _'.venv'_. Again, since the file begins with a dot, its treated as hidden file and only comes up when you do `ls -a`.

---

### Q11) What changed about your prompt?
> **Ans :** My prompt changed by having a `(.venv)` at the beginning, indicating that I am inside my virtual environment.

---

### Q12) Compare this with what you wrote down for question 7. Is it the same path? If not, what does that tell you about what `activate` actually did to your `PATH`?
> **Ans :** No, they are not the same. This tells us that the `activate` modified our PATH environment variable. The command `activate` puts the exact location of `.venv/bin` in front of the system's PATH variable. Because the shell starts from left to right, it encounters our virtual environment first and thats why we reach here first. By running the `deactivate` command, it removes this virtual environment location from our PATH variable.

---

### Q13) What is in the second list that was not in the first?
> **Ans :** The items in the second list are the `requests` library and its dependencies.
> These additional items are :
> * requests
> * urllib3
> * certifi
> * idna
> * charset-normalizer 

---

### Q14) Where does 'python3' point now?
> **Ans :** It now points to `/usr/bin/python3`

---

### Q15) Find what `ls -h` does. Write it in your own words.
> **Ans :** `ls -h` prints the list command in human readable format. However, only running the command `ls -h` won't do anything. If you pair it up with the `-l` flag (long listing format), normally you would see the exact bytes the items take, but with `-h` flag, it prints the size of the items in kilobytes, megabytes, gigabytes, etc which is in human readable format.

---

### Q16) What is the difference between what `Ctrl + C` and `Ctrl + D` did?
> **Ans :** `Ctrl + C` interrupts the shell and kills whatever process was running and gives you the terminal prompt back.
> `Ctrl + D` basically just exits the terminal (essentially same as the exit prompt).
