/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:52:02 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/13 15:26:46 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;

	if (nmemb == SIZE_MAX && size == SIZE_MAX)
		return (0);
	space = malloc(nmemb * size);
	if (!space)
		return (0);
	ft_memset(space, 0, nmemb * size);
	return (space);
}
