#include "main.h"

/**
 * _strncpy - function that copies a certain number of bytes
 * @dest: pointer of destination string
 * @src: pointer of source string
 * @n: number of characters to be copied
 * Description: function copies n number of characters form source string
 * to destination string. If n is greater than src then the remaining
 * bytes of n is filled with null byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, src_count;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	j--;
	src_count = j;
	if (n < src_count)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	if (n > src_count)
	{
		for (i = 0; i < n; i++)
		{
			if (i > src_count && i < n)
			{
				dest[i] = '\0';
			}
			else
			{
				dest[i] = src[i];
			}
		}
	}
	return (dest);
}
