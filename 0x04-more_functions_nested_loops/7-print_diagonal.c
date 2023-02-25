#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of input
 * Return: diagonal line
 */
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= n; a++)
{
for (b = 1; b <= a; b++)
{
_putchar('_');
}
_putchar('\\');
_putchar('\n');
}
}
}
