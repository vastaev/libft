/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoanne <cjoanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:39:03 by cjoanne           #+#    #+#             */
/*   Updated: 2021/10/12 16:06:51 by cjoanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	step;

	step = 0;
	if (s)
	{
		while (s[step])
		{
			write(fd, &s[step], 1);
			step++;
		}
	}
	write(fd, "\n", 1);
}
