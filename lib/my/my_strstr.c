/*
** EPITECH PROJECT, 2017
** strstr
** File description:
** task 4
*/

char	*my_strstr(char const *str, char const *to_find)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0' && to_find[j] != '\0') {
		if (str[i] == to_find[j])
			j ++;
		else if (str[i] != to_find[j - 1])
			j = 0;
		i ++;
	}
	if (str[i] == '\0' && to_find[j] != '\0')
		return (0);
	return ((char*) &str[i - j]);
}
