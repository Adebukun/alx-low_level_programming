#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @var: the last digit of a number
 *
 * Return: 0 if successful
 */
int print_last_digit(int var)
{
	int result;
	if (var < 0)

		result = -1 * (var % 10);
	else
		result = var % 10;
	_putchar ((result) + '0');
	return (result);
}
