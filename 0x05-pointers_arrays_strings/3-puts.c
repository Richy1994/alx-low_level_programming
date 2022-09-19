#include "main.h"
/**
 * _puts - check the code
 *
 * @str: prints a string with next line
 */
void _puts(char *str)
{
int i = 0;

while (*(str + 1))
{
_putchar(*(str + 1));
i++;
}
_putchar('\n');
}
