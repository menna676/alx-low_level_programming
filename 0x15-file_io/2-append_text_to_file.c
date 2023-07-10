#include "main.h"
/**
* append_text_to_file - append txt in end of a file.
* @filename: pointer to fname
* @text_content: str to get added at end of file.
* Return: when it fail, or fname is NULL - -1.
* if file doesn't occur user write permissions - -1., Else - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
