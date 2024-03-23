GETPID(2)                     System Calls Manual                    GETPID(2)

NAME
     getpid, getppid – get parent or calling process identification

SYNOPSIS
     #include <unistd.h>

     pid_t
     getpid(void);

     pid_t
     getppid(void);

DESCRIPTION
     getpid() returns the process ID of the calling process.  The ID is
     guaranteed to be unique and is useful for constructing temporary file
     names.

     getppid() returns the process ID of the parent of the calling process.

