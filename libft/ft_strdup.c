/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:49:41 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:49:42 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;

	ret = (char *)ft_strnew(ft_strlen(s) * sizeof(char));
	return (ret ? ft_strcpy(ret, s) : NULL);
}
