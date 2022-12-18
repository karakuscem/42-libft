/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:25:00 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/13 15:55:14 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = -1;
	p = (unsigned char *)s;
	while (++i < n)
		if (p[i] == (unsigned char)c)
			return ((unsigned char *)p + i);
	return (NULL);
}
