#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int lower = (c >= 'A' && c <= 'Z');
	if (lower || upper)
		return (1);
	else
		return (0);
}
