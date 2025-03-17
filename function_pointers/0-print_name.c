#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"

/**
 *my_name - print a name as is
 *@name: name to be printed
 *
 *Return: nothing
 */
void my_name(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 *my_uppercase_name - print a uppercase name as is
 *@name: name to be printed
 *
 *Return : nothing
 */
void my_uppercase_name(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 *print_name - print a name using the provided function
 *@name: the name to print
 *@f: pointer to a function that takes a string argument and returns nothing
 *
 *Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i;

	if (f != NULL)
	{
		f(name);
	}

	for (i = 0; i < 2; i++)
	{
		print_name("Bob", my_name);
		print_name("BOB DYLAN", my_uppercase_name);
		printf("\n");
	}
}
