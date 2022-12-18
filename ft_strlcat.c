/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:16:54 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/07 12:34:43 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && !size)
		return (0);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + size);
	ft_strlcpy((dst + dst_len), src, size - dst_len);
	return (dst_len + src_len);
}
