/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:30:26 by ckarakus          #+#    #+#             */
/*   Updated: 2022/12/20 17:41:28 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_len;

	lst_len = 1;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst_len++;
		lst = lst -> next;
	}
	return (lst_len);
}
