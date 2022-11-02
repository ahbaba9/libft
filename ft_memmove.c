/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:23:51 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/29 22:35:46 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	i = len - 1;
	if (dst > src)
	{
		while (i + 1 != 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}

// int main()
// {
// 	char t[] = "je mapelle ayoub amine belhaj";
// 	char *d = t + 11;
// 	char *s = t + 17;
// 	ft_memmove(d, s, 5);
// 	printf("%s",t );
// }