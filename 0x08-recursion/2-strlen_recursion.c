#include "main.h"

/**
 * _strlen_recursion - name of the function
 * @s: pointer to array
 * Return: length of string at array
 */

int _strlen_recursion(char *s)
{
  if (!s || !*s)
    return;

  s + _strlen_recursion(s + 1);
}
