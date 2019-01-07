/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelcont.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:44:31 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:44:32 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelcont(t_list **alst, void *cont)
{
	t_list	*prev;
	t_list	*current;

	if (!alst || !*alst)
		return ;
	prev = *alst;
	if (prev->content == cont)
	{
		*alst = prev->next;
		return ;
	}
	current = prev->next;
	while (current)
	{
		if (current->content == cont)
		{
			prev->next = current->next;
			free(current);
			free(cont);
			return ;
		}
		prev = current;
		current = current->next;
	}
}
