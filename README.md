# OS_xv6_Scheduling-Algorithm
Soongsil University. Operating System 2020-2 - Assignment#3 : Processes and Scheduling in xv6

xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix Version 6 (v6).

– **user.h** contains the system call definitions in xv6. 

– **usys.S** contains a list of system calls exported by the kernel.

– **syscall.h** contains a mapping from system call name to system call number.

– **syscall.c** contains helper functions to parse system call arguments, and pointers.

– **sysproc.c** contains the implementations of process related system calls.

– **proc.h** contains the struct proc structure.

– **proc.c** contains the function scheduler performing scheduling and context switching between processes.
