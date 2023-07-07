#include "main.h"
/**
* set_bit - set the bit at the given index to 1
* @n: pointer to num to be changed
* @index: bit index to set to 1
* Return: 1 (Success), -1 when it fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
