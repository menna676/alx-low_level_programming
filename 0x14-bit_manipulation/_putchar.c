#include "main.h"
#include <unistd.h>
/**
* _putchar - write char c to stdout
* @c: char to be printed
* Return: 1 (Success)
* -1 is returned on error, and errno is set approp
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
