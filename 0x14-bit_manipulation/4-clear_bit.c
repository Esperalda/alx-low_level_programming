#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: base 10 number
* @ndx: index to set to 1
*
* Return: 1 if it worked, or -1 if an error occurred
*
*/
int clear_bit(unsigned long int *n, unsigned int ndx)
{
unsigned long int mask;

if (ndx > 63)
return (-1);

mask = 1 << ndx;

*n = *n & ~mask;

return (1);
}
