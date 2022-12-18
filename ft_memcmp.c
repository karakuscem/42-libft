/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:10:04 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/13 15:24:17 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = -1;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (++i < n)
		if (*(str1 + i) != *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
	return (0);
}
