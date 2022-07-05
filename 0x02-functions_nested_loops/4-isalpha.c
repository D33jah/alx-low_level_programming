#include "main.h"
/**
 * _isalpha - check if a character is alphabetic
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lettter, lowercase or uppercase
 *
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
