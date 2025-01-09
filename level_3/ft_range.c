#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	i = 0;
	int	len;

	if (end > start)
		len = end - start + 1;
	else
		len = start - end + 1;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	if (start < end)
	{
		while (i < len)
			arr[i++] = start++;
	}
	else
	{
		while (i < len)
			arr[i++] = start--;
	}
	return (arr);
}
