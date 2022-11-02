/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:55:39 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/23 20:10:40 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == 0)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}

// int main()
// {
//     int i = 0;
//     char s[] = "babaaa";
//     char *p;
//     p = ft_calloc(10,sizeof(char));
//     while(i < 10 && s[i])
//     {
//         p[i] = s[i];
//         i++;
//     }
//     printf("%s\n", p);
// }
