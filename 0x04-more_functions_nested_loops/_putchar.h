#include "main.h"
#include <unistd.h>
/**
* putchar - write character to stdout
@c character to print
* Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
