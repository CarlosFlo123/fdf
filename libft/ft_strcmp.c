/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:49:19 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:49:21 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
		if (*(s1++) != *(s2++))
			return ((*(t_byte *)(s1 - 1) - *(t_byte *)(s2 - 1)));
	return (0);
}
