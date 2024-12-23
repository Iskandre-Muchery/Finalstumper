/*
** EPITECH PROJECT, 2017
** strcmp
** File description:
** task 5
*/

int	my_strcmp(char const *s1, char const *s2)
{
	int cnt = 0;

	while (s1[cnt] != '\0' && s2[cnt] != '\0' && s1[cnt] == s2[cnt])
		cnt ++;
	return (s1[cnt] - s2[cnt]);
}
