#include <unistd.h>
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
