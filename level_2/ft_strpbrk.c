#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;

	while (*s1)
	{
		i = 0;
		while (*s1 != s2[i] && s2[i])
			i++;
		if (s2[i] != '\0')
			return ((char *)s1) ;
		s1++;
	}
	return (NULL);
}
