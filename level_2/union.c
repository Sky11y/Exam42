#include <unistd.h>

void	wunion(char *s1, char *s2)
{
	unsigned char	used[256] = {0};

	while (*s1)
	{
		if (!used[(unsigned char)*s1])
		{
			used[(unsigned char)*s1] = 1;
			write (1, s1, 1);
		}
		s1++;
	}
	while (*s2)
	{
		if (!used[(unsigned char)*s2])
		{
			used[(unsigned char)*s2] = 1;
			write (1, s2, 1);
		}
		s2++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wunion(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
