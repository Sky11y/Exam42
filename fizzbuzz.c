#include <unistd.h>

void	write_nbr(int n)
{
	char str[10] = "0123456789";

	if (n > 9)
		write_nbr(n / 10);
	write (1, &str[n % 10], 1);
}
void	fizzbuzz(int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_nbr(i);
		write (1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	int	x;

	x = 100;
	fizzbuzz(x);
	return (0);
}
