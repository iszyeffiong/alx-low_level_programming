#include "main.h"
/**
 * print_line - func that draws a straight line
 * @n: number of times to print character
 * Return:a straight line
 */
void print_line(int n)
{
int o;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (o = 1; o <= n; o++)
{
_putchar('_');
}
_putchar('\n');
}
}
