/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 04:35:38 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/08 04:35:48 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_exit(void)
{
	exit(1);
}

void	ft_error(char *s)
{
	ft_putendl_fd(s, 2);
	ft_exit();
}

void	ft_error_unknown(void)
{
	ft_putstr("Error: ");
	ft_error(strerror(errno));
}
