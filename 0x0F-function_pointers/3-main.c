#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - prints the result of simple operations
* @argc: the number of arguments supplied to the program
* @argv: an array of pointers to the arguments
* Return: always 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi (argv[3]);
}
