#include "main.h"
 /**
 *more_numbers - function that prints 0 to 14, 10 times
 *followed by a new line
 * Return: 0 to 14 for 10times
 */
void more_numbers(void)
{
int c, i;
for (c = 0; c < 10; c++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
