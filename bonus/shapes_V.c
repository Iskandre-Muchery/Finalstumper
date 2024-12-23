/*
** EPITECH PROJECT, 2017
** diff_shapes
** File description:
** detecting the diffrents shapes
*/

#include <stdio.h>
#include "../include/my.h"

void my_print_arg(int c, int l)
{
	my_put_nbr(c);
	my_putchar(' ');
	my_put_nbr(l);
}

void my_print_rush(char *str, int c, int l)
{
	my_putstr("[rush1-");
	my_putchar(str[8]);
	my_putstr("] ");
	my_put_nbr(c);
	my_putchar(' ');
	my_put_nbr(l);
	my_putstr(" || ");
}

void diff_shapes(char *str, int c, int l)
{
	my_print_rush(str, c, l);
	if (str[8] == '2' && c == 1 && l == 1)
		my_putstr("[rhombus] 1 1\n");
	else if (l == c) {
		my_putstr("[square] ");
		my_print_arg(c, l);
		my_putstr(" || ");
		my_putstr("[rectangle] ");
		my_print_arg(c, l);
		my_putchar('\n');
	}
	else {
		my_putstr("[rectangle] ");
		my_print_arg(c, l);
		my_putchar('\n');
	}
}

int main(int ac, char **av)
{
	long c = my_getnbr(av[1]);
	long l = my_getnbr(av[2]);

	if (ac != 3)
		return (84);
	else {
		if (c > 2147483647 || l > 2147483647) {
			my_putstr("none\n");
			return (84);
		}
		if (l <= 0 || c <= 0) {
			my_putstr("none\n");
			return (84);
		}
		diff_shapes(av[0], (int)c, (int)l);
		return (0);
	}
}
