#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	do_op(char *s1, char *op, char *s2)
{
	int	n1;
	int	n2;

	n1 = atoi(s1);
	n2 = atoi(s2);
	if (op[0] == '+')
		printf("%d\n", n1 + n2);
	else if (op[0] == '-')
		printf("%d\n", n1 - n2);
	else if (op[0] == '*')
		printf("%d\n", n1 * n2);
	else if (op[0] == '/')
		printf("%d\n", n1 / n2);
	else if (op[0] == '%')
		printf("%d\n", n1 % n2);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		write (1, "\n", 1);
	else
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
