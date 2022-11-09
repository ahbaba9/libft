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

int	counter(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
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

char	**ft_cuter(const char *s, char c, char **string)
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

	if (!s)
		return (NULL);
	string = (char **)malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!string)
		return (NULL);
	ft_cuter(s, c, string);
	return (string);
}
