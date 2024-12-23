/*
** EPITECH PROJECT, 2017
** strcat
** File description:
** task 2
*/

char	*my_strcat(char *dest, char const *src)
{
	int count = 0;
	int count_2 = 0;

	while (dest[count] != '\0')
		count ++;
	while (src[count_2] != '\0') {
		dest[count] = src[count_2];
		count ++;
		count_2 ++;
	}
	return (dest);
}
