#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

void execmd(char **argv);
char *get_location(char *command);
int stat(const char *pathname, struct stat *statbuf);
char *_getenv(const char *name);
char *_strdup(const char *str);



#endif

