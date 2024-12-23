/*
** EPITECH PROJECT, 2017
** strcpy
** File description:
** task 1
*/

char	*my_strcpy(char *dest, char const *src)
{
	int count = 0;

	while (dest[count] != '\0') {
		dest[count] = src[count];
		count ++;
	}
	return (dest);
}
