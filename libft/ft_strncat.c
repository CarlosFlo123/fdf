/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:51:07 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:51:48 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dest;
	while (*dest)
		dest++;
	while (++x < n && *src)
		*(dest++) = *(src++);
	*dest = 0;
	return (ret);
}
