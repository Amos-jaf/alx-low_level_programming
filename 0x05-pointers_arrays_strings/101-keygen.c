#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Generates a random password for 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
    int i;
    char password[9];
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        password[i] = characters[rand() % 62];
    }
    password[8] = '\0';

    printf("Generated password: %s\n", password);

    return (0);
}

