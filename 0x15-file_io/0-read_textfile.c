#include "main.h"
#include <stdlib.h>

/**
* read_textfile -  reads a text file and prints it
* to the POSIX standard output
* @filename: name of the file
* @letters: number of letters it should read and print
*
* Return: returns the actual number of letters it could read and print
* 0 if file cannot be opened or read
* 0 if filename is NULL
* 0 if write fails or does not write expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int wd, checkout, checkin;
char *c;

if (filename == 0)
return (0);

c = malloc(letters + 1);

if (c == 0)
return (0);

wd  = open(filename, O_RDONLY);

if (wd == -1)
return (free(c), 0);

checkout = read(wd, c, letters);

if (checkout == -1)
return (free(c), 0);

c[letters] = '\0';

checkin = write(STDOUT_FILENO, c, checkout);
if (checkin == -1)
return (free(c), 0);

free(c);
close(fd);
return (checkin);
}
