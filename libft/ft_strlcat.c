/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <tlaukkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:33:32 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/11/10 15:39:19 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dst2;
	size_t src2;

	i = 0;
	dst2 = ft_strlen(dst);
	src2 = ft_strlen(src);
	if (dstsize <= dst2)
		return (src2 + dstsize);
	while (src[i] && (dst2 + i) < dstsize - 1)
	{
		dst[dst2 + i] = src[i];
		i++;
	}
	dst[dst2 + i] = '\0';
	return (dst2 + src2);
}
