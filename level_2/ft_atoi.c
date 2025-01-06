int	ft_atoi(char *str)
{
	int	ret = 0;
	int	i = 0;
	int	neg = 1;

	while (str[i] == 32)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		ret = ret * 10 + (str[i++] - '0');
	return (ret * neg);
}
