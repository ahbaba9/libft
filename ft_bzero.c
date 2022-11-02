/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:55:22 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/20 00:50:11 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}	
}
