/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:04:51 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/17 22:22:31 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_return;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	to_return = malloc(len + 1);
	if (!to_return)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		to_return[j++] = s[i++];
	to_return[j] = '\0';
	return (to_return);
}
