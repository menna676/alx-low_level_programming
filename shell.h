#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <limits.h>

#define Convert_lowercase     1
#define Convert_unsigned      2

#define Read_Buff_size  1024
#define Write_Buff_size 1024
#define Buff_flush      -1

#define Use_Getline 0
#define Use_strtok  0

#define CMD_norm      0
#define CMD_or        1
#define CMD_and       2
#define CMD_chain     3

#define Hist_File    ".simple_shell_history"
#define Hist_Max     4096

extern char **environ;

/**
* struct liststr - list singly
* @numb: numb field
* @str: string
* @next: next node pointer
*/
typedef struct liststr
{
int numb;
char *str;
struct liststr *next;
} list_t;
/**
* struct passinfo - structure containing pseudo-args to get passed into a fun..
* allows uniform prototype for fun. pointer structure.
* @arg:  str produced from getline contains args.
* @argv: str array produced from `arg`.
* @path: str representing existing command's path.
* @argc: count of arg.
* @line_count: the count of lines (errors).
* @err_num: exit()s fault code.
* @linecount_flag: if enabled, count line of input.
* @fname: the filename of program.
* @env: a list representing enviroment local copy.
* @environ: adjusted custom copy of the environment from the linked list `env`.
* @history: node history.
* @alias: node alias.
* @env_changed: if enabled, indicates that `environ` got changed.
* @status: last carried out command return status.
* @cmd_buf: a pointer address to `cmd_buf`, if chaining.
* @cmd_buf_type: CMD_type: ||, &&, or ;.
* @readfd: file descriptor to read line input from.
* @histcount: count of history line numbs.
*/
typedef struct passinfo
{
int readfd;
int status;
int linecount_flag;
int cmd_buf_type;
int histcount;
int err_num;
int argc;
int env_changed;
unsigned int line_count;
char **cmd_buf;
char *fname;
char *arg;
char **environ;
char **argv;
char *path;
list_t *alias;
list_t *history;
list_t *env;
} info_t;
#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
0, 0, 0}
/**
* struct builtin - include builtin related fun. and str.
* @type: builtin instruction flag.
* @func: fun..
*/
typedef struct builtin
{
char *type;
int (*func)(info_t *);
} builtin_table;

int isinteractivemode(info_t *);
int isdelimiter(char, char *);
int isalphabetic(int);
int stringtoint(char *);

int displayHistory(info_t *info);
int Remove_alias(info_t *info, char *str);
int set_shellAlias(info_t *info, char *str);
int print_shellAlias(list_t *node);
int shellAlias(info_t *info);

#endif
