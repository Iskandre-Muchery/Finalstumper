/*
** EPITECH PROJECT, 2017
** square_root
** File description:
** task 1
*/

int	my_compute_square_root(int nb)
{
	int count = 1;

	while (count * count < nb)
		count ++;
	if (count * count == nb)
		return (count);
	return (0);
}
