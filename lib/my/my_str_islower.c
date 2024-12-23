/*
** EPITECH PROJECT, 2017
** str_islower
** File description:
** task 1
*/

int	my_condition_islower(char const *str, int count)
{
	if (str[count] < 97 || str[count] > 122) {
		if (str[count] != '0')
			return (0);
	}
	return (1);
}

int	my_str_islower(char const *str)
{
	int count = 0;

	if (str[0] == '\0')
		return (1);
	while(str[count] != '\0') {
		if (my_condition_islower(str, count) == 0)
			return (0);
		count ++;
	}
	return (1);
}
