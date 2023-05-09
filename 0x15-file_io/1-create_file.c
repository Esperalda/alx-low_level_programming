#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - it creates a file
 *
 * @filename: it is the name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: Returns: 1 on success, -1 on failure
 * file can not be created, file can not be written, write “fails”, etc…
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
int Qd, check002, l = 0;

if (filename == 0)
return (-1);

Qd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (Qd == -1)
return (-1);

if (text_content)
{
while (text_content[l] != 0)
l++;
check002 = write(Qd, text_content, l);

if (check002 == -1)
return (-1);
}

close(Qd);
return (1);
}
