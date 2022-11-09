/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:12:04 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/18 23:50:13 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] != 0 && len == 0)
		return (0);
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && len >= ft_strlen(needle))
	{
		if (haystack[i] == needle[0]
			&& ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		i++;
		len--;
	}
	return (0);
}
