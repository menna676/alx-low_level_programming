#include "shell.h"
/**
* My_Exit - get out from shell
* @info: pointer to struct includes information about the shell
* Return: when info->argv[0] != "exit" exit with a given exit status (0)
*/
int My_Exit(info_t *info)
{
int exit_status;
if (info->argv[1])
{
exit_status = _erroratoi(info->argv[1]);
if (exit_status == -1)
{
info->status = 2;
print_error(info, "Invalid number: ");
_eputs(info->argv[1]);
_eputchar('\n');
return (1);
}
info->err_num = _erratoi(info->argv[1]);
return (-2);
}
info->err_num = -1;
return (-2);
}
/**
* MyCD - converts existing dir of process
* @info: pointer to struct includes information about the shell
* Return: 0 always
*/
int MyCD(info_t *info)
{
char *p, *dirc, buffer[1024];
int chdir_ret;
p = getcwd(buffer, 1024);
if (!p)
_puts(" TODO: >>getcwd failed emsg here<<\n");
if (!info->argv[1])
{
dirc = _getenv(info, "HOME=");
if (!dirc)
chdir_ret = /* TODO: what should this be? */
chdir((dirc = _getenv(info, "PWD=")) ? dirc : "/");
else
chdir_ret = chdir(dirc);
}
else if (_strcmp(info->argv[1], "-") == 0)
{
if (!_getenv(info, "OLDPWD="))
{
_puts(p);
_putchar('\n');
return (1);
}
_puts(_getenv(info, "OLDPWD="));
_putchar('\n');
chdir_ret = /* TODO: what should this be? */
chdir((dirc = _getenv(info, "OLDPWD=")) ? dirc : "/");
}
else
chdir_ret = chdir(info->argv[1]);
if (chdir_ret == -1)
{
print_error(info, "can not cd to ");
_eputs(info->argv[1]), _eputchar('\n');
}
else
{
_setenv(info, "OLDPWD", _getenv(info, "PWD="));
_setenv(info, "PWD", getcwd(buffer, 1024));
}
return (0);
}
/**
* MyHelp - converts existing dir of process
* @info: pointer to struct includes information about the shell
* Return: 0 always
*/
int MyHelp(info_t *info)
{
char **arg_array;
arg_array = info->argv;
_puts("help function is called. function not implemented yet.\n");
if (0)
_puts(*arg_array); /* Temporary workaround to avoid unused var warning */
return (0);
}
