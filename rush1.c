/*
** EPITECH PROJECT, 2017
** COUNT_LINES_AND_COLUMNS
** File description:
** function that count the number of lines and colums
*/

#include "include/my.h"

int count_L_C(char *str);

int count_C(char *str)
{
	int counter_c = 0;
	
	for (int d = 0; str[d] != '\n'; d++) {
		counter_c++;
	}
	return (counter_c);
}

void my_compare(char *str)
{
	if (str[0] == str[count_C(str) - 1]) {
		my_putstr("[rush1-3] ");
		count_L_C(str);
		my_putchar('\n');
	}
	else if (str[0] != str[my_strlen(str) - 2]) {
		my_putstr("[rush1-4] ");
		count_L_C(str);
		my_putchar('\n');
	}
	else {
		my_putstr("[rush1-5] ");
		count_L_C(str);
		my_putchar('\n');
	}
}
