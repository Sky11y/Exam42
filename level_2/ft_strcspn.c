#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while (s[i])
	{
		j = 0;
		while (s[i] != reject[j] && reject[j])
			j++;
		if (reject[j] != '\0')
			return (i);
		i++;
	}
	return (i);
}
