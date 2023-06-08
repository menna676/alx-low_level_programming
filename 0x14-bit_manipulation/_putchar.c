#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return:(Success) 1.
* errno is set appropriately and On error, -1 is returned.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
