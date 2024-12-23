/*
** EPITECH PROJECT, 2017
** strncat
** File description:
** task 3
*/

char	*my_strncat(char *dest, char const *src, int nb)
{
	int count = 0;
	int count_2 = 0;

	while (dest[count] != '\0')
		count ++;
	while (src[count_2] != '\0' && count_2 < nb) {
		dest[count] = src[count_2];
		count ++;
		count_2 ++;
	}
	return (dest);
}
