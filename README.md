# <p align="center">C - Simple Shell</p>

## :bookmark: Table of Contents
<details>
        <summary>
        CLICK TO ENLARGE :star2:
        </summary>
        :dart: <a href="#objective">Objective</a>
        <br>
        :shell: <a href="#description">Description</a>
        <br>
        :floppy_disk: <a href="#prototypes">Prototypes</a>
        <br>
        :clipboard: <a href="requirements">Requirements</a>
        <br>
        :floppy_disk: <a href="#compilation-command">Compilation Command</a>
        <br>
        :ocean: <a href="#flowcharts">Flowcharts</a>
        <br>
        :open_file_folder: <a href="#files-description">Files Descriptions</a>
        <br>
        :computer: <a href="#install_run_use">How to install and run our Simple Shell</a>
        <br>
        :blue_book: <a href="man-page">MAN page</a>
        <br>
        :sparkles: <a href="#authors">Authors</a>
</details>

## :dart: <span id="objective">Objective</span>
To write a simple UNIX command interpreter.

## :shell: <span id="description">Description</span>

The Simple Shell is a basic interactive shell that allows users to execute commands and perform various operations. It provides a command prompt where users can enter commands for execution.
<br><br>
The shell supports standard commands, as well as some special commands for environment information and exit built-ins

## :floppy_disk: <span id="prototypes">Prototypes</span>

- 'int main(void);' : main function of the Simple Shell (entry point).

- 'void execmd(char **argv);' : used to execute a command passed as an argument in shell environment

- 'char *get_location(char *command);' : used to extract the location information from a given command string

## :clipboard: <span id="requirements">Requirements</span>
- Allowed editors: **vi**, **vim**, **emacs**.
- All the files will be compiled on **Ubuntu 20.04 LTS** using **gcc**.
- The code should use **betty style**.
- Global variables are not allowed
- No more than 5 functions per file.
- The header files should be include guarded.
- Your shell should not have any memory leaks.

## :floppy_disk: <span id="compilation-command">Compilation Command</a>
'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o eshell