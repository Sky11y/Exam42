/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiensal <jpiensal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:24:22 by jpiensal          #+#    #+#             */
/*   Updated: 2025/01/07 11:48:36 by jpiensal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int neg = 1;
	int val = 0;
	int res = 0;

	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	if (*str == '0')
		return (res);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			val = *str - 48;
		else if (*str >= 'A' && *str <= 'Z')
			val = *str - 55;
		else if (*str >= 'a' && *str <= 'z')
			val = *str - 87;
		else
			break ;
		res = res * str_base + val;
		str++;
	}
	return (res * neg);
}
