/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:35:15 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/18 22:54:50 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{	
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i--;
	}
	i = ft_strlen(s);
	if ((char ) c == '\0')
		return ((char *)(s + i));
	return (0);
}
