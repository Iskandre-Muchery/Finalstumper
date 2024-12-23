/*
** EPITECH PROJECT, 2017
** COUNT_LINES_AND_COLUMNS
** File description:
** function that count the number of lines and colums
*/

#include "include/my.h"

int count_L_C(char *str)
{
	int counter_L = 0;
	int counter_C = 0;
	
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '\n')
			counter_L++;
	}
	for (int d = 0; str[d] != '\n'; d++) {
		counter_C++;
	}
	my_put_nbr(counter_C);
	my_putchar(' ');
	my_put_nbr(counter_L);
	return (0);
}
