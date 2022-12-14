#include "main.h"
/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0 (Success)
 * main - Entry point
*/
int main(void)
{
	char text[10] = "_putchar";
	int i = 0;
for (i = 0; i < 9; i++)
{
	_putchar(text[i]);
}
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);

