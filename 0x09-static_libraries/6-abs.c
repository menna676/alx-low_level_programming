#include "main.h"
/**
* _abs - Computes the absloute value of an integer
*@c: The number to be computed.
*Return: 0 or Absloute value of number
*/
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
