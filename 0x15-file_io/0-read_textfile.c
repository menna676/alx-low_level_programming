#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read file text print to STDOUT
* @filename: file text to be read
* @letters: num of letters being read
* Return: Actual num of bytes read and printed w-
* 0 when filename is NULL, or at failure
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
