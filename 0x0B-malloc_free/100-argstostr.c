#include "main.h"

/**
 * argstostr - function concatenates all the arguments passed to a program
 * @ac: argument count
 * @av: argument vector
 * Description: stores the concatenated arguements in a pointer
 * Return: pointer to the concatenated string of arguments
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, count;

	count = 0;
	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	str = malloc((sizeof(char) * count) + 1);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (k < count)
			{
				str[k] = av[i][j];
				k++;
			}
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
