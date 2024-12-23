/*
** EPITECH PROJECT, 2017
** str_isnum
** File description:
** task 1
*/

int	my_str_isnum(char const *str)
{
	int count = 0;

	if (str[0] == '\0')
		return (1);
	while(str[count] != '\0') {
		if (str[count] < 48 || str[count] > 57)
			return (0);
		count ++;
	}
	return (1);
}
