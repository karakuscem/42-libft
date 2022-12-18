/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:18:05 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/12 19:36:09 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*new_str;

	s_len = ft_strlen(s);
	new_str = malloc(s_len + 1 * sizeof(char));
	if (!new_str)
		return (0);
	ft_strcpy(new_str, s);
	return (new_str);
}
