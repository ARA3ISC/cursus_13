/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:14:14 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/02 02:08:12 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_ground(t_mlx_data *m, int i, int j)
{
	int	width;
	int	height;

	m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr, "./res/l2ard.xpm", &width,
			&height);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60 * j, 60
			* i);
}

void	display_wall(t_mlx_data *m, int i, int j)
{
	int	width;
	int	height;

	m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr, "./res/l7it.xpm", &width,
			&height);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60 * j, 60
			* i);
}

void	display_coins(t_mlx_data *m, int i, int j)
{
	int	width;
	int	height;

	display_ground(m, i, j);
	m->coin_ptr[0] = mlx_xpm_file_to_image(m->mlx_ptr,
											"./res/coin1.xpm",
											&width,
											&height);
	m->coin_ptr[1] = mlx_xpm_file_to_image(m->mlx_ptr,
											"./res/coin2.xpm",
											&width,
											&height);
	m->coin_ptr[2] = mlx_xpm_file_to_image(m->mlx_ptr,
											"./res/coin3.xpm",
											&width,
											&height);
	m->coin_ptr[3] = mlx_xpm_file_to_image(m->mlx_ptr,
											"./res/coin4.xpm",
											&width,
											&height);
	m->coin_ptr[4] = mlx_xpm_file_to_image(m->mlx_ptr,
											"./res/coin5.xpm",
											&width,
											&height);
	m->coin_ptr[5] = mlx_xpm_file_to_image(m->mlx_ptr,
											"./res/coin6.xpm",
											&width,
											&height);
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->coin_ptr[m->index], 60
			* j, 60 * i);
	if (!m->coin_ptr[m->index])
		print_error("Error : corrupted xpm");
}
void	display_other_items(t_mlx_data *m, char *item, int i, int j)
{
	int	width;
	int	height;

	display_ground(m, i, j);
	m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr,
										item,
										&width,
										&height);
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60 * j, 60
			* i);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
}
