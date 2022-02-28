#include "main.h"

/**
 * _strspn - name of the function
 * @s: string to compare with accept
 * @accept: string to compare with s
 * Return: value of a
 */

unsigned int _strspn(char *s, char *accept)
{
  unsigned int a, b;

  for (a = 0; s[a]; a++)
    {
      for (b = 0; accept[b]; b++)
	{
	  if (s[a] == accept[b])
	    break;
	}
      if (!(accept[b]))
	break;
    }
  return (a);
}
