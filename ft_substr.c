/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:04:51 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/18 13:01:38 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_return;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	to_return = malloc(len + 1);
	if (!to_return)
		return (NULL);
	ft_strlcpy(to_return, s + start, len + 1);
	return (to_return);
}
