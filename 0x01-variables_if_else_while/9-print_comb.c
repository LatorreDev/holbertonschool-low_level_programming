#include <stdio.h>
/**
 *   main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
int ch;

for (ch = '0' ; ch <= '8' ; ch++)
{
putchar(ch);
putchar (',');
putchar (' ');
}
putchar('9');

return (0);
}
