/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 04:20:11 by ahbaba            #+#    #+#             */
/*   Updated: 2022/11/07 00:08:08 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ha_atoi(char *str, int sign, int i)
{
	unsigned long	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		if (result > 9223372036854775807 && sign == -1)
			return (0);
		if (result > 9223372036854775807 && sign == 1)
			return (-1);
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-')
	{	
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (ha_atoi((char *)str, sign, i));
}
