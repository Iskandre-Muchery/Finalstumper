/*
** EPITECH PROJECT, 2017
** finalstumper
** File description:
** main
*/

#include <unistd.h>
#include "include/my.h"
#define BUFF_SIZE (4096)

void my_compare(char *);
void count_L_C(char *);

int rush3(char *str)
{
	if (str[0] == 'o') {
		my_putstr("[rush1-1] ");
		count_L_C(str);
		my_putchar('\n');
		return (0);
	}
	else if (str[0] == '*' || str[0] == '/') {
		my_putstr("[rush1-2] ");
	        count_L_C(str);
		my_putchar('\n');
		return (0);
	}
	else if (str[0] == 'A' || str[0] == 'B') {
		if (str[0] == 'B') {
			my_putstr("[rush1-3] 1 1 ||");
			my_putstr("[rush1-4] 1 1 ||");
			my_putstr("[rush1-5] 1 1\n");
		}
		else
			my_compare(str);
		return (0);
	}
	return (84);
}

int main()
{
	char buff[BUFF_SIZE + 1];
	int offset;
	int len;

	offset = 0;
	while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
		offset = offset + len;
	buff[offset] = '\0';
	if (len < 0)
		return (84);
	if (rush3(buff) == 84) {
		my_putstr("none\n");
		return (84);
	}
	return (0);
}
