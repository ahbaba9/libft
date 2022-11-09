/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:21:08 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/13 00:48:37 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int main()
// {
// 	char a = 'a';
// 	printf("%d", ft_isalpha('b' + 256));
// }