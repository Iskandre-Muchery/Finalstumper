/*
** EPITECH PROJECT, 2017
** part 1
** File description:
** bootstrap
*/

int my_getnbr(char *str)
{
	int i = 0;
	long num = 0;
	int neg = 1;

	while (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			neg = neg *  -1;
		i ++;
	} while (str[i] > 47 && str[i] < 58 && str[i] != '\0') {
		if (str[i] > 47 && str[i] < 58) {
			num = num * 10;
			num = num + str[i] - 48;
		}
		i ++;
		if (neg == -1 && num > 2147483648)
			return (0);
		else if (neg == 1 && num > 2147483647)
			return (0);
	}
	return ((int)num * neg);
}
