int	is_power_of_2(unsigned int n)
{
	int	cur = 2;

	if (n == 1 || n == 2)
		return (1);
	else if (n == 0)
		return (0);
	while (cur < n)
	{
		cur = cur * 2;
		if (cur == n)
			return (1);
	}
	return (0);
}
