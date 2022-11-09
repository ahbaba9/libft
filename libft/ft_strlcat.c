/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 04:10:06 by ahbaba            #+#    #+#             */
/*   Updated: 2022/11/07 22:51:13 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	i = 0;
	sl = ft_strlen(src);
	if (!dst && !src)
		return (0);
	// if (!dst && dstsize == 0)
	// 	return (sl);
	dl = ft_strlen(dst);
	if (dstsize <= dl)
		sl += dstsize;
	else
		sl += dl;
	while (src[i] && (dl + 1 < dstsize))
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	if (dstsize > dl)
		dst[dl] = '\0';
	return (sl);
}
