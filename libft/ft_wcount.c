/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:56:41 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:56:53 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wcount(char *s, char delim)
{
	int	size;

	size = 0;
	if (*s && *s != delim)
		size++;
	while (*++s)
		if (*s != delim && *(s - 1) == delim)
			size++;
	return (size);
}
