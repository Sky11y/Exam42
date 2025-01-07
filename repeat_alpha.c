#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	rep;
	int	i;

	rep = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			rep = str[i] - 'a' + 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			rep = str[i] - 'A' + 1;
		while (rep-- > 0)
			write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n", 1);
	else
		repeat_alpha(argv[1]);
	return (0);
}
