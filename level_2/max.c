int	max(int *tab, unsigned int len)
{
	int	max;

	if (len == 0)
		return (0);
	max = tab[--len];
	while (len-- > 0)
	{
		if (tab[len] > max)
			max = tab[len];
	}
	return (max);
}
