/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 05:11:29 by cflores-          #+#    #+#             */
/*   Updated: 2018/12/08 05:11:31 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#include <stdio.h>

void	display_usage(char *av)
{
	ft_putstr("usage: ");
	ft_putstr(av);
	ft_putendl(" input_file");
}

void	display_controls(void)
{
	ft_putendl("CONTROLS:\n\
Translation:\n\
	Y: Key: UP, DOWN\n\
	X: Key: LEFT, RIGHT\n\
Rotation:\n\
	X: Keypad: Q, A\n\
	Y: Keypad: W, S\n\
	Z: Keypad: E, D\n\
Zoom:\n\
	IN: Keypad: +\n\
	OUT: Keypad: -");
}

int		main(int ac, char **av)
{
	t_data	*data;

	if (ac == 2)
	{
		data = (t_data *)ft_memalloc(sizeof(t_data));
		if (!data)
			ft_error("Malloc Error");
		data->plot = valid_file(av[1]);
		display_controls();
		draw_everything(data);
	}
	else
		display_usage(av[0]);
	return (0);
}
