/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:39:25 by cjoanne           #+#    #+#             */
/*   Updated: 2021/10/12 16:07:10 by cjoanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	int		offset;
	size_t	step;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	offset = (int)dlen;
	step = 0;
	if (dstsize <= dlen)
		return (dstsize + ft_strlen(src));
	while (src[step] != '\0' && (dstsize - dlen - 1) > step)
	{
		dst[offset] = src[step];
		step++;
		offset++;
	}
	dst[offset] = '\0';
	return (dlen + slen);
}
