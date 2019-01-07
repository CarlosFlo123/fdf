/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 08:56:21 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/10 08:56:25 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		leading;
	int		trailing;
	int		x;

	if (!s)
		return (NULL);
	x = -1;
	leading = 0;
	trailing = 0;
	while (ft_isspace(*(s + ++x)))
		leading++;
	while (*(s + x++))
		trailing = ft_isspace(*(s + x - 1)) ? trailing + 1 : 0;
	ret = ft_strnew(ft_strlen(s) - trailing - leading);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + leading, ft_strlen(s) - trailing - leading));
}
