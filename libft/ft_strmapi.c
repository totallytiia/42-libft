/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:11:17 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/10/26 16:28:54 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*res;

	index = 0;
	if (!s)
		return (NULL);
	if (!(res = ft_strdup((char *)s)))
		return (NULL);
	while (s[index])
	{
		res[index] = f(index, s[index]);
		index++;
	}
	return (res);
}
