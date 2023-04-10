#include "main.h"
#include <stdlib.h>

/**
* append_text_to_file - A function that appends text at the end of a file
*
* @filename: its the name of the file
* @text_content: NULL terminated string to append to end of file
*
* Return: Returns: 1 on success, -1 on failure
* Do not create the file if it does not exit
*
* if filename is NULL return -1
* If text_content is NULL, do not add anything to the file.
* Return 1 if the file exists and -1 if the file does not exist or if you
* do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
int wd, checkin, l = 0;

if (filename == 0)
return (-1);

wd = open(filename, O_WRONLY | O_APPEND);

if (wd == -1)
return (-1);

if (text_content)
{
while (text_content[l] != 0)
l++;

checkin = write(wd, text_content, l);

if (checkin == -1)
return (-1);
}

close(wd);
return (1);
}
