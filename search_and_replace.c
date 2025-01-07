#include <unistd.h>

void	search_and_replace(char *str, char *c, char *r)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c[0])
			str[i] = r[0];
		write (1, &str[i++], 1);
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] || argv[3][1])
		write (1, "\n", 1);
	else
		search_and_replace(argv[1], argv[2], argv[3]);
	return (0);
}
