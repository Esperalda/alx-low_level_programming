#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile -  should read a text file and prints it.
* to the POSIX standard output.
* @filename: It is the name of the file.
* @letters: It is the number of letters it should read and print.
*
* Return: it returns the actual number of letters it could read and print.
* 0 if file cannot be opened or read
* 0 if filename is NULL
* 0 if write fails or does not write expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int Qd, check001, check002;
char *c;

if (filename == 0)
return (0);

c = malloc(letters + 1);

if (c == 0)
return (0);

Qd  = open(filename, O_RDONLY);

if (Qd == -1)
return (free(c), 0);

check001 = read(Qd, c, letters);

if (check001 == -1)
return (free(c), 0);

c[letters] = '\0';

check002 = write(STDOUT_FILENO, c, check001);
if (check002 == -1)
return (free(c), 0);

free(c);
close(Qd);
return (check002);
}
