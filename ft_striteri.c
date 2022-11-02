/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:54:30 by ahbaba            #+#    #+#             */
/*   Updated: 2022/10/30 19:55:26 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void f(unsigned int i, char* c)
// {
//     *c = *c + 5;
// }

// int main()
// {
// 	char str1[] = "abc";	
// 	ft_striteri(str1, *f);
// 	printf("%s\n", str1);
// }
