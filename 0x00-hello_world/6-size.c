#include<stdio.h>


/**
 * main - main block
 * Return: 0
 */
int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long: %zu bytes\n", sizeof(mlong));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long long: %zu byte\n", sizeof(mlonglong));

return (0);
}
