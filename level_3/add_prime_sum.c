#include <unistd.h>

int	ft_atoi(char *nbr)
{
	int	i = 0;
	int	neg = 1;
	int	res = 0;

	while (nbr[i] == 32)
		i++;
	if (nbr[i] == '-')
		neg = -1;
	if (nbr[i] == '-' || nbr[i] == '+')
		i++;
	while (nbr[i] && (nbr[i] >= '0' && nbr[i] <= '9'))
		res = res * 10 + (nbr[i++] - '0');
	return (res * neg);
}

int	is_prime(int nbr)
{
	int	x = nbr;

	if (nbr <= 1)
		return (0);
	while (--x > 1)
	{
		if (nbr % x == 0)
			return (0);
	}
	return (1);
}

void	put_nbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		put_nbr(nbr / 10);
	digit = nbr % 10 + '0';
	write (1, &digit, 1);
}

void	add_prime_sum(unsigned int nbr)
{
	int	sum = 0;

	while (nbr > 0)
	{
		if (is_prime(nbr))
			sum += nbr;
		nbr--;
	}
	put_nbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_atoi(argv[1]) > 0)
		add_prime_sum(ft_atoi(argv[1]));
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
