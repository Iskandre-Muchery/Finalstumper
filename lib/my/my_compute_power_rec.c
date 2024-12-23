/*
** EPITECH PROJECT, 2017
** power rec
** File description:
** worklib
*/

int	my_compute_power_rec(int nb, int p)
{
	int result;

	if (p == 0)
		return (1);
	else if (p < 0)
		return (0);
	result = nb * my_compute_power_rec(nb, p - 1);
	return (result);

}
