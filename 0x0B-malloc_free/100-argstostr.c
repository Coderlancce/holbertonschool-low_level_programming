#include "main.h"

/**
 * argstostr - name of the function
 * @ac: number of arguments
 * @av: doble pointer with array
 * Return: concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int n, ch, i = 0;
	int lenstr = ac;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (ch = 0; av[n][ch]; ch++)
			lenstr++;
	}

	str = malloc(sizeof(char) * lenstr + 1);

	if (str == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (ch = 0; av[n][ch]; ch++)
		{
			str[i] = av[n][ch];
			i++;
		}
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';

	return (str);
}
