#include <unistd.h>

void	expand_str(char *str)
{
	size_t	i = 0;

	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
			write (1, &str[i++], 1);
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i] == '\0')
			break ;
		else
			write (1, "   ", 3);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
