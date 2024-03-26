#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

void execmd(char **argv);
char *get_location(char *command);
int stat(const char *pathname, struct stat *statbuf);



#endif