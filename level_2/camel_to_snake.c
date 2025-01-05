#include <unistd.h>

void	camel_to_snake(char *str)
{
	int		i = 0;
	int		j = 0;
	int		cases = 0;
	char	*ret;
	
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write (1, "_", 1);
			str[i] = str[i] + 32;
		}
		write (1, &str[i++], 1);
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n", 1);
	else
		camel_to_snake(argv[1]);
	return (0);
}
