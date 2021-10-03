/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:02:55 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/03 14:21:57 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_strings(char **str, char*s, char c)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			x++;
		else
		{
			j = 0;
			while (s[x] && s[x] != c)
			{
				str[i][j] = s[x];
				j++;
				x++;
			}
			str[i][j] = 0;
			i++;
		}
	}
	str[i] = 0;
}

static	int	allocte_strings(char **str, char *s, char c)
{
	int		i;
	int		size;
	int		x;

	i = 0;
	size = 0;
	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			x++;
		else
		{
			size = 0;
			while (s[x] && s[x++] != c)
				size++;
			str[i] = (char *)malloc(sizeof(char) * size + 1);
			if (!str[i])
				return (0);
			i++;
		}
	}
	fill_strings(str, (char *)s, c);
	return (1);
}

static int	word_counter(char *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	if (!s || !c)
	{
		str = (char **)malloc(sizeof(char *));
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
	}
	words = word_counter((char *)s, c);
	str = (char **)malloc(sizeof(char *) * words + 1);
	if (!(str))
		return (0);
	allocte_strings(str, (char *)s, c);
	return (str);
}
