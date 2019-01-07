/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:48:35 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:48:37 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Makes sure src is valid
** if newsize < srcsize, src is truncated
*/

void	*ft_realloc(void *src, size_t srcsize, size_t newsize)
{
	void *ret;

	if (!src)
		return (NULL);
	ret = ft_memalloc(newsize);
	ft_memcpy(ret, src, MIN(srcsize, newsize));
	free(src);
	return (ret);
}
