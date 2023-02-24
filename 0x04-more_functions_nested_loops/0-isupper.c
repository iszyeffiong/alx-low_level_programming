#include "main.h"
/**
 *_isupper - function to check for uppercase
 *@c: character to be checked
 *Return: 1 if successful: otherwise 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}
