#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - prints the alaphabet in lower case
 *
 * Return: 0 if success
 **/

int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
