/*
** EPITECH PROJECT, 2017
** strncpy
** File description:
** tast 2
*/

char	*my_strncpy(char *dest, char const *src, int n)
{
	int count = 0;

	while (count < n && dest[count] != '\0') {
		dest[count] = src[count];
		count ++;
	}
	return (dest);
}
