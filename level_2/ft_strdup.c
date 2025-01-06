#include <stdlib.h>

char	*ft_strdup(char *src)
{
	size_t	len = 0;
	char	*ret;
	size_t	i = -1;

	while(src[len])
		len++;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret != NULL)
	{
		while (src[++i])
			ret[i] = src[i];
		ret[i] = '\0';
	}
	return (ret);
}
