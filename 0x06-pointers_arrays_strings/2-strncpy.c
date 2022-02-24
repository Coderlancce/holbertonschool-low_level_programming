#include <stdio.h>
#include "main.h"

/**
 * _strncpy - name of the function
 * @dest: pointer to paste
 * @src: pointer to copy
 * @n: value of strings copies
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
  int a = 0;

  for (a = 0; a < n && src[a] != '\0'; a++)
    dest[a] = src[a];

  for (; a < n; a++)
    dest[a] = '\0';

  return (dest);
}
