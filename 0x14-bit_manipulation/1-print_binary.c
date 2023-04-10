#include "main.h"

/**
* rev_bin - prints binary representation of number with & and Shift Right
* operators, but uses recursion to reverse the result
*
* @q: decimal number
* @mark: checks for special case number 0
*
* Return: No return
*/
void rev_bin(unsigned long int q, int mark)
{
if (mark == 1)
{
_putchar('0');
return;
}

if (q == 0)
return;

rev_bin(q >> 1, mark);

if ((q & 1) == 0)
_putchar('0');

if ((q & 1) == 1)
_putchar('1');
}
/**
* print_binary - it prints the binary representation of a number
* @q: base 10 number
*
* Return: No return
*
*/
void print_binary(unsigned long int q)
{
if (q == 0)
rev_bin(q, 1);
else
rev_bin(q, 0);
}
