## Project Title

## Our Simple Shell Project

![Shell image](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

## Background Context

The goal of this project is to write a simple UNIX command interpreter, also known as a shell. The shell should be able to display a prompt and wait for the user to type a command. It should then execute the command and display the output to the user. The shell should also be able to handle errors and the "end of file" condition (Ctrl+D). 

The command lines are simple and made only of one word, with no semicolons, pipes, redirections, or other advanced features. The shell should be able to handle command lines with arguments and use the PATH to find programs. 

In addition, the shell should implement the exit built-in, which allows the user to exit the shell. The exit built-in should not handle any arguments. 

The project will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89. The code should follow the Betty style and have no more than 5 functions per file. System calls should only be used when necessary to avoid memory leaks.

## Learning Objectives

- Understand who designed and implemented the original Unix operating system
- Learn who wrote the first version of the UNIX shell
- Discover who invented the B programming language (the direct predecessor to the C programming language)
- Know who Ken Thompson is
- Understand how a shell works
- Learn what a pid and a ppid are
- Know how to manipulate the environment of the current process
- Understand the difference between a function and a system call
- Know how to create processes
- Understand the three prototypes of main
- Know how the shell uses the PATH to find programs
- Learn how to execute another program with the execve system call
- Know how to suspend the execution of a process until one of its children terminates
- Understand what EOF / "end-of-file" is

## Questions

- Who designed and implemented the original Unix operating system?
- Who wrote the first version of the UNIX shell?
- Who invented the B programming language (the direct predecessor to the C programming language)?
- Who is Ken Thompson?
- How does a shell work?
- What is a pid and a ppid?
- How do you manipulate the environment of the current process?
- What is the difference between a function and a system call?
- How do you create processes?
- What are the three prototypes of main?
- How does the shell use the PATH to find programs?
- How do you execute another program with the execve system call?
- How do you suspend the execution of a process until one of its children terminates?
- What is EOF / "end-of-file"?

# Simple Shell 0.1

This is a UNIX command line interpreter that you can run on your terminal. To use it, follow these steps:

1. Clone this repository to your local machine.
2. Compile the shell program by running `gcc -Wall -Werror -Wextra -pedantic *.c -o shell`.
3. Run the program by typing `./shell` in your terminal.

Once the shell is running, it will display a prompt and wait for you to type a command. Here are some features of the shell:

- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, the shell will print an error message and display the prompt again.
- The shell handles errors and the "end of file" condition (Ctrl+D).

Note that the shell does not use the PATH, implement built-ins, handle special characters (`"`, `'`, `` ` ``, `\`, `*`, `&`, `#`), or be able to move the cursor. It also does not handle commands with arguments.

Here's an example of how the shell can be used:


```
julien@ubuntu:~/shell$ ./shell 
#cisfun$ ls
./shell: No such file or directory
#cisfun$ /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ /bin/ls -l
./shell: No such file or directory
#cisfun$ ^[[D^[[D^[[D
./shell: No such file or directory
#cisfun$ ^[[C^[[C^[[C^[[C
./shell: No such file or directory
#cisfun$ exit
./shell: No such file or directory
#cisfun$ ^C
julien@ubuntu:~/shell$ echo "/bin/ls" | ./shell
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ julien@ubuntu:~/shell$

```
The shell should be compiled this way:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Testing
The shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
The shell does not use functions like ```strtok``` and ```printf```
The allowed functions and system calls are:
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

Make sure to replace the GitHub repository link with the correct URL for your repository!!

## Authors

- Addy Mwenda ([@addymwenda](https://github.com/addymwenda12))
- Dominic Opiyo ([@dominicopiyo](https://github.Dominic-Opiyo))
