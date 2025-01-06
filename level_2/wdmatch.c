#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	size_t	i = 0;
	size_t	j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		while (*s1)
			write (1, s1++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
