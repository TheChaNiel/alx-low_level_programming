#include <stdio.h>
/**
 * main - Entry point
 * author:TheChaNiel
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int TheChaNiel;

for (TheChaNiel = 48; TheChaNiel < 58; TheChaNiel++)
{
	putchar(TheChaNiel);
	if (TheChaNiel !=57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return(0);
}
