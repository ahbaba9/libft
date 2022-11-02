/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:18:44 by ahbaba            #+#    #+#             */
/*   Updated: 2022/11/02 02:52:00 by ahbaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	**free_string(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		strings[i] = NULL;
		i++;
	}
	free(strings);
	strings = NULL;
	return (strings);
}

char	**ft_cut(const char *s, char c, char **string)
{
	int	i;
	int	j;
	int	index;

	j = 0;
	i = 0;
	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			string[index++] = ft_substr(s, 0, j);
			if (!string[index - 1])
				return (free_string(string));
			s += j;
		}
	}
	string[index] = NULL;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**string;

	string = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!string)
		return (NULL);
	ft_cut(s, c, string);
	return (string);
}
