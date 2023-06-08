#include "main.h"
/**
* get_endianness - check whether machine is big or little endian
* Return: 1 if little, 0 if big
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
