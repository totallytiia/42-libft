/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:25:34 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/11/01 12:55:14 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	st;
	size_t	len;

	st = 0;
	if (!s)
		return (NULL);
	while (s[st] && ft_isspace(s[st]))
		st++;
	if (s[st] == '\0')
		return (ft_strdup(s + st));
	len = ft_strlen(s) - 1;
	while (s[len] && ft_isspace(s[len]))
		len--;
	return (ft_strsub(s, st, (len - st + 1)));
}
