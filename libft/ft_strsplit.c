/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:41:55 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/10/25 16:43:48 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			word++;
		while (*s && *s != c)
			s++;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**b;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s || (!(b = (char **)malloc(sizeof(char *) * ft_wcount(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(b[k] = (char *)malloc(sizeof(char) * ft_strclen(s, c) + 1)))
				return (NULL);
			while (*s && *s != c)
				b[k][i++] = *s++;
			b[k][i] = '\0';
			k++;
			i = 0;
		}
	}
	b[k] = NULL;
	return (b);
}
