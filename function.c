#include "main.h"

/**
 * _putchar - prints the character to stdout
 * @c: char value
 *
 * Return: On success 1,  -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - prints the character c to stdout
 * @ap: pointer
 *
 * Return: Always(1) Success
 */

int _print_char(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}

/**
 * _print_string -  prints a string
 * @arg_list: pointer to string
 *
 * Return: 1
 */

int _print_string(va_list arg_list)
{
	int i = 0;
	char *s;

	s = va_arg(arg_list, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * _print_percent - Prints percentage
 * @arg_list: pointer
 *
 * Return: 1
 */
int _print_percent(va_list arg_list __attribute__((__unused__)))
{
	_putchar('%');
	return (1);
}
/**
 * _print_int - Prints an integer
 * @arg_list: pointer
 *
 * Return: Number of digits
 */

int _print_int(va_list arg_list)
{
	int i;
	int count = 0;
	int n = va_arg(arg_list, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
