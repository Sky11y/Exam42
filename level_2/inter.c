#include <unistd.h>

void	inter(char *s1, char *s2)
{
	size_t			i;
	unsigned char 	used[256] = {0};

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
			{
				if (!used[(unsigned char)*s1])
				{
					write (1, s1, 1);
					used[(unsigned char)*s1] = 1;
				}
				break ;
			}
			i++;
		}
		s1++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write (1, "\n", 1);
	else
		inter(argv[1], argv[2]);
	return (0);
}
