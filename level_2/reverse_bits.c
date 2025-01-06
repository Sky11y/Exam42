unsigned char	reverse_bits(unsigned char octet)
{
	int bit = 0;
	unsigned char	res = 0;

	while (bit < 8)
		res = (res << 1) | ((octet >> bit++) & 1);
	return (res);
}
