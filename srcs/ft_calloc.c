/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:00:20 by cjoanne           #+#    #+#             */
/*   Updated: 2021/10/12 16:04:59 by cjoanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	size_t			len;

	len = size * count;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	while (len--)
		*str++ = '\0';
	return (str);
}
