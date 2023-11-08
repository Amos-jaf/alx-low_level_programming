#include "function_pointers.h"

/**
 * print_name - function that prints a name passed into it
 * @name: string to be printed
 * @f: pointer to a function that does the printing proper
 * Description: functtion accepts a string and calls another function via
 * the second arguement which is a function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
