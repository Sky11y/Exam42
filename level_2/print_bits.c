#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	bits = 8;
	unsigned char bit;

	while (bits--)
	{
		bit = (octet >> bits & 1) + '0';
		write (1, &bit, 1);
	}
}
