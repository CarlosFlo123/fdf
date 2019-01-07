/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:45:43 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:45:48 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp;

	temp = (t_byte *)s;
	while (n--)
		if (*(temp++) == (unsigned char)c)
			return (void *)(temp - 1);
	return (NULL);
}
