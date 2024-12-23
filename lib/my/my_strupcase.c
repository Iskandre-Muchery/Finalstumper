/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** task 7
*/

char	*my_strupcase(char *str)
{
	int count = 0;

	while (str[count] != '\0') {
		if (str[count] > 96 && str[count] < 123)
			str[count] = (str[count] - 32);
		count ++;
	}
	return (str);
}
