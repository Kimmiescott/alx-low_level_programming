#include <main.h>
#include <unistad.h>
/**
 * _putchar . writes the character c to stdout
 * @c : The character to printx
 *
 * Return: On success 1.
 * On error, -1 is returned and error is set appropriate
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
