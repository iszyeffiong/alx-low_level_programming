#include "main.h"
/**
 * print_square - func that prints square
 * @size: the nize of the square
 * Return: square ma e of '#'
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a <= size; a++)
{
_putchar('#');
for (b = 0; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
