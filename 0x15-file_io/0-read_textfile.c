#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* read_textfile- Read text file and print to STDOUT.
* @filename: Name of the text file to be read
* @letters: Num of letters being read
* Return: Actual number of bytes read and printed (w) or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *bufs;
ssize_t w = 0;
size_t t;
if (filename == NULL)
return (0);
file = fopen(filename, "r");
if (file == NULL)
return (0);
bufs = malloc(sizeof(char) * letters);
if (bufs == NULL)
{
fclose(file);
return (0);
}
t = fread(bufs, sizeof(char), letters, file);
if (t > 0)
w = fwrite(bufs, sizeof(char), t, stdout);
free(bufs);
fclose(file);
return (w);
}
