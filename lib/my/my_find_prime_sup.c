/*
** EPITECH PROJECT, 2017
** find_prime_sup
** File description:
** worklib
*/

int	my_is_prime(int);

int	my_find_prime_sup(int nb)
{
	int count = nb;

	while (my_is_prime(count) != 1)
		count ++;
	return (count);
}
