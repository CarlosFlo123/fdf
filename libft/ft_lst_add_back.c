/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:43:42 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:43:44 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_add_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	if (!new || !alst)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		curr = *alst;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
	}
}
