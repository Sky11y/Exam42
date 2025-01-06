#include <unistd.h>

void	last_word(char *str)
{
	int	i = 0;
	int	start = 0;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '\0')
			break ;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
	}
	while (str[start] && str[start] != ' ' && str[start] != '\t')
		write (1, &str[start++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);	
	write (1, "\n", 1);
	return (0);
}
