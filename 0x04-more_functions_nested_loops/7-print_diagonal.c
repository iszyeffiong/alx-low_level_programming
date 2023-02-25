1 #include "main.h"
2 /**
3 *print_diagonal - prints diagonal line
4 *@n: number of times to print line
5 *Return: \ on success: otherwise \n if n<= 0
6 */
7 void print_diagonal(int n)
8 {
9 int i, c;
10 if (n <= 0)
11 {
12 _putchar('\n');
13 }
14         else
15         {
16         for (c = 1; c <= n; c++)
17                 {
18                 for (i = 1; i < c; i++)
19                         {
20                         _putchar(' ');
21                         }
22                _putchar('\\');
23		_putchar('\n');
24		}
25	}
26}
