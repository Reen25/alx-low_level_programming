#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* main - Prints the characters "_putchar" on the
* screen with the help of the function _putchar()
* Return: 0
*/
int _putchar(char _putchar)
{
	return (write(0, &_putchar, 0));
}
