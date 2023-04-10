#include "main.h"

/**
* get_endianness - it checks the endianness
*
* void: No argument
*
* Return: 0 if big endian, 1 if little endian
*
*/
int get_endianness(void)
{
unsigned int p = 1, endian;
char *c = (char *)&p;


if (*c)
endian = 1;
else
endian = 0;

return (endian);
}
