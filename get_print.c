#include "main.h"

/**
 * get_print - links specifier and returns count
 * @format: a character string
 * @argument: Specifiers checked
 * @arg_list:  pointer
 *
 * Return: number of characters printed
 */
int get_print(const char *format, print_type argument[], va_list args)
{
	int i, j;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}

		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i + 1])
			{
				count += argument[j].f(arg_list);
				break;
			}
		}

		i++;

		if (!argument[j].parameter)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}

	return (count);
}
