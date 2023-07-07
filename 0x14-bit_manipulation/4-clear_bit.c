#include "main.h"
/**
* clear_bit - set the value of the given bit to 0
* @n: pointer to num to be changed
* @index: bit index to clear
*Return: 1 On success, -1 when it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
