#include "main.h"
#include <stdlib.h>
/**
* read_textfile - Read the file txt print to STDOUT
* @filename: file txt to get read
* @letters: numb of the letters to get read
* Return: The actual bytes numb printed and read w-
* 0 when fname is NULL, or if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
