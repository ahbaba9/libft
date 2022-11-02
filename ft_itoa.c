/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:21:07 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/31 01:12:29 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	unsigned int	a;
	long long		k;

	k = n;
	a = 0;
	if (k < 0)
	{
		a++;
		k *= -1;
	}
	while (k > 0)
	{
		a++;
		k = k / 10;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	char			*z;
	long long		k;

	k = n;
	if (k == 0)
		return (ft_strdup("0"));
	z = malloc(count(n) + 1);
	if (z == NULL)
		return (NULL);
	i = count(n);
	if (n < 0)
	{
		z[0] = '-';
		k *= -1;
	}
	z[i] = '\0';
	i--;
	while (k > 0)
	{
		z[i] = (k % 10) + 48;
		k = k / 10;
		i--;
	}
	return (z);
}
// int main()
// {
//     int a = -133548;
//     printf("%d\n",count(a));
//     printf("%s", ft_itoa(a));
// }
