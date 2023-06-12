#include "main.h"
#include <unistd.h>
/**
* _putchar - write c char to stdout
* @c : char to be printed
* Return: 1 (Success)
*errno is set appropriately and On error -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
