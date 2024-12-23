/*
** EPITECH PROJECT, 2017
** str_isprintable
** File description:
** task 14
*/

int	my_str_isprintable(char const *str)
{
	int count = 0;

	if (str[0] == '\0')
		return (1);
	while(str[count] != '\0') {
		if (str[count] < 32 && str[count] != '0')
			return (0);
		count ++;
	}
	return (1);
}
