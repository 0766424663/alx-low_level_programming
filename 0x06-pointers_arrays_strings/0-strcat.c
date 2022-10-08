#include "holberton.h"

/**
 * _strcat - entry point
 * @dest: string destination
 * @src: string source
 * Description: prints a string, followed by a new line, to stdout.
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

char *ptr;
int longitud = 0;

while (dest[longitud] != '\0')
longitud++;

ptr = dest + longitud;

while (*src != '\0')
*ptr++ = *src++;

*ptr = '\0';

return (dest);
}

