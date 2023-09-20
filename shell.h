#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_PATH_LENGTH 1024
extern char **environ;
char **tokenize_input(const char *input);
void execute_child(char **args);
void execute_command(char **args);
int local_strncmp(const char *str1, const char *str2, size_t n);
char *custom_strncpy(char *dest, const char *src, size_t n);
char *get_environment_variable(const char *name);
void custom_strcpy(char *dest, const char *src);
void custom_strcat(char *dest, const char *src);
void trim_newline(char **str);
size_t _strlen(const char *str);
int count_arguments(const char *str);
int _strcmp(const char *s1, const char *s2);
char **tokenize_input(const char *input);
int execute_in_path(char *executable, char *path, char **args);
char *construct_full_path(char *directory, char *executable);
void display_prompt(void);
char *read_user_input(void);
void process_input(char *input);
void handle_input(void);
void print_environment(void);

#endif /* SHELL_H */

