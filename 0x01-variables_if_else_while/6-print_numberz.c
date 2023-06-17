#include <stdio.h>
/**
 * main -
 * Prints all single digit numbers of base 10 starting from 0
 * Description: using the main function
 * this program prints numberz
 * Return: 0
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
	putchar((num % 10) + '0');
}
putchar('\n');

return (0);
}
