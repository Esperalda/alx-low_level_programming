#include "main.h"

/**
* flip_bits - returns the number of bits you would need to
* flip to get from one number to another
* @p: base 10 number
* @q: base 10 number
*
* Return: Number of bits you would need to flip
*
*/
unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
unsigned long int r;
int count = 0;

r = p ^ q;

while (r != 0)
{
count += r & 1;
r = r >> 1;
}

return (count);
}
