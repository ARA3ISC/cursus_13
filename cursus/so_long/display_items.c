/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:14:14 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/29 23:13:32 by maneddam         ###   ########.fr       */
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

	m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr, "./res/l7it.xpm",
			&width, &height);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60
		* j, 60 * i);
}

void	display_other_items(t_mlx_data *m, char *item, int i, int j)
{
	int	width;
	int	height;

	display_ground(m, i, j);
	m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr,
			item, &width, &height);
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60 * j, 60
		* i);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
}
