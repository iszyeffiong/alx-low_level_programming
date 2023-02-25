#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints largest factor
 * Return: prime factor
 */
int main(void)
{
long prime, pf;
while (pf < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}
for (pf = 3; pf < (prime / 2); pf += 2)
{
if ((pf % prime) == 0)
prime /= pf;
}
}
printf("%ld\n", prime);
return (0);
}
