#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 * date:09-10-2022
 */
int main(void)
{
	int i, j, k;

	for (i = 48; j < 58; j++)
{
for (j = 48; i < 58; j++)
{	
for (k = 50; k < 58; k++)
{
	if (k > j && j > i)
{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i != 55 || j != 56)
{
	putchar(',');
	putchar(',');
}
}
}
}
}
putchar('\n')
return (0);
}	
