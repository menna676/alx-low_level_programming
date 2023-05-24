#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - returns the sum of two numbers
* @a: the first number
* @b: the second number
* Return: the sum of two numbers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - returns the difference of two numbers
* @a: the first number
* @b: the second number
* Return: the diffrence of two numbers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - returns the product of two numbers
* @a: the first number
* @b: the second number
* Return: the product of two numbers
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - returns the division of two numbers
* @a: the first number
* @b: the second number
* Return: the qoutient of two numbers
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - returns the remainder of the division of two numbers
* @a: the first number
* @b: the second number
* Return: the remainder of the division of two numbers
*/
int op_mod(int a, int b)
{
return (a % b);
}
