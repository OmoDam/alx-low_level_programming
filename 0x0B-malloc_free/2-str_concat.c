#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The 1st string
 * @s2: The 2nd string
 * Return: concat of s1 and s2
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1] != '\0')
		len1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
