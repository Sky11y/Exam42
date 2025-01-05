#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] = 'a' + ('z' - str[i]);
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i] = 'A' + ('Z' - str[i]);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		write (1, &str[i++], 1);
	}
	write (1, "\n",1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n",1);
	else
		alpha_mirror(argv[1]);
	return (0);
}
