#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: a pointer to a string
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
/**
 * _strlenc - returns the length of a constant character
 * @str: pointer to a character
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
