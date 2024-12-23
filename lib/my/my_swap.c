/*
** EPITECH PROJECT, 2017
** swap
** File description:
** worklib
*/

void	my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
