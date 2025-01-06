#include <unistd.h>

void	epur_str(char *str)
{
	while (*str && (*str == 32 || *str == '\t'))
		str++;
	while (*str)
	{
		while (*str && *str != 32 && *str != '\t')
			write (1, str++, 1);
		while (*str && (*str == 32 || *str == '\t'))
			str++;
		if (*str == '\0')
			break ;
		else
			write (1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
