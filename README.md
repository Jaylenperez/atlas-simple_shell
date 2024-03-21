The History of the UNIX operating system
The first release of Unix was implemented in the distant year of 1969, where one of its capabilities was to be able to run a video game called “Space Travel”. 
The researcher behind this was the great Ken Thompson, an American computer scientist who received the Turing prize together with another scientist and colleague (and longtime friend) Dennis Ritchie – the inventor of the C language. 
Towards the end of the 1960s, three (3) US entities were tasked to create an advanced operating system called Multics. The three organisations were MIT (Massachusetts Institute of Technology), AT&T Bell Labs, and the computer manufacturer General Electric (GE). Multics was the pseudo-acronym for Multiplexed Information and Computing system. It was developed to be the interactive operating system for the Mainframe GE 645s. 
One of the objectives for Multics was to provide more functionality to a number of users simultaneously, as well as to provide information sharing, while offering some robustness in data security. The project went through various challenges, so much so that for various reasons Bell Labs decided to abandon it.
Ken Thompson, one of the Bell Labs researchers involved in the Multics projects, wrote a video game called Space Travel for the GE mainframe, however running the game made the machine slow and jerky. Additionally, after Bell Labs abandoned the project, he was no longer able to improve it. It was then decided that with the help of Dennis Ritchie, it would be re-written from scratch in such a way that it could be run on a different machine: the DEC PDP-7 computer. 
This new experience and collaboration gave birth to the development of a new operating system that used a file system structure designed and created by Thompson himself, together with Ritchie and with the help of Rudd Canaday. Thompson and colleagues created a multitasking operating system that included: a file system, command interpreter, and utilities for the PDP-7. Given that the new multitasking OS for the PDP-7 was originally intended for only one user at a time (and moreover each part of the system was designed to best perform a single task) the newborn OS was baptised UNICS (where Uni stands for One). This acronym (Uniplexed Information and Computing System) was later changed slightly to Unix, around the 1970s.
In 1973 Ritchie and Thompson rewrote the Unix kernel in C language. Writing in C language brought enormous advantages, among which, being able to simplify maintenance and make it portable – having the ability to run on other machines. This was unlike most of the other systems for small machines of the time , which were essentially written in assembly language and did not have these advantages.

What are PID and PPID?
In Linux, an executable stored on disk is called a program, and a program loaded into memory and running is called a process. When a process is started, it is given a unique number called process ID (PID) that identifies that process to the system. If you ever need to kill a process, for example, you can refer to it by its PID. Since each PID is unique, there is no ambiguity or risk of accidentally killing the wrong process (unless you enter the wrong PID).
In addition to a unique process ID, each process is assigned a parent process ID (PPID) that tells which process started it. The PPID is the PID of the process’s parent.

* What is the difference between a function and a system call
A system call differs from a user function in several key ways. A system call has more privilege than a normal subroutine. A system call runs with kernel-mode privilege in the kernel protection domain. System call code and data are located in global kernel memory.

What are the prototypes of main function in C?



￼

A function prototype in C is a function declaration specifying the function's return type, name, and the number and types of its parameters. It acts as a contract between the function definition and its callers, providing information about the expected inputs and outputs of the function.Aug 29, 2023

* How does the shell use the PATH to find the programs
* The shell searches each directory in the path. If a command is not found, long searches can slow down system performance.
* The search path is read from left to right, so you should put directories for commonly used commands at the beginning of the path.
* Make sure directories are not duplicated in the path.

How to execute another program with the execve system 
In C, the execve system call is used to execute a new program. It replaces the current process image with a new process image specified by the given file path. The execve system call has the following function prototype: int execve(const char *path, char *const argv[], char *const.

How to suspend the execution of a process until one of its children terminates
The wait() function shall suspend execution of the calling thread until status information for one of the terminated child processes of the calling process is available, or until delivery of a signal whose action is either to execute a signal-catching function or to terminate the process.

What is EOF / “end-of-file”?
In computing, end-of-file (EOF) is a condition in a computer operating system where no more data can be read from a data source. 



