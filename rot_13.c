#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] = str[i] + 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i] = str[i] + 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = str[i] - 13;
		write (1, &str[i++], 1);
	}
	write (1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n", 1);
	else
		rot_13(argv[1]);
	return (0);
}
