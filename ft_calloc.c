/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:52:02 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/18 13:03:53 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*space;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	space = malloc(count * size);
	if (!space)
		return (0);
	ft_memset(space, 0, count * size);
	return (space);
}
