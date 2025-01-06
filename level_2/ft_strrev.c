#include <stddef.h>

char	*ft_strrev(char *str)
{
	size_t	i = 0;
	size_t	len;
	char	temp;

	while (str[len])
		len++;
	if (len != 0)
		len--;
	while (str[i] && i < len)
	{
		temp = str[i];
		str[i++] = str[len];
		str[len--] = temp;
	}
	return (str);
}
