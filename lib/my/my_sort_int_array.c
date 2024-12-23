/*
** EPITECH PROJECT, 2017
** sort_int_array
** File description:
** task 1
*/

#include <stdlib.h>
#include <stdio.h>

void	my_sort_int_array(int *tab, int size)
{
	int count = 0;
	int num = 0;

	while (count < size) {
		if (tab[count] > tab[count + 1] && count + 1 < size) {
			num = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = num;
			count = 0;
		}
		else
			count ++;
	}
}
