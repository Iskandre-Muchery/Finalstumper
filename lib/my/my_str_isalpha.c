/*
** EPITECH PROJECT, 2017
** str_isalpha
** File description:
** task 1
*/

int	my_str_isalpha(char const *str)
{
	int count = 0;

	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0') {
		if (str[count] < 65 || str[count] > 122)
			return (0);
		else if (str[count] > 90 && str[count] < 97)
			return (0);
		count ++;
	}
	return (1);
}
