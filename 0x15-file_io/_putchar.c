#include "main.h"
#include <unistd.h>
/**
* _putchar - write c char to stdout
* @c : char to be printed
* Return: 1 Success, on error -1 is returned and errno is set properly
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
