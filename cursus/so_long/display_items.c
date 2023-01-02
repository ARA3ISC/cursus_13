/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:14:14 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/02 05:58:50 by maneddam         ###   ########.fr       */
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

void	fill_coin_ptr(t_mlx_data *m, int *width, int *height, int k)
{
	char	*k_str;
	char	*extension;
	char	*path;
	char	*r;
	char	*item;

	extension = ".xpm";
	path = "./res/coins/coin";
	while (k < 8)
	{
		k_str = ft_itoa(k);
		r = ft_strjoin(path, k_str);
		item = ft_strjoin(r, extension);
		m->coin_ptr[k] = mlx_xpm_file_to_image(m->mlx_ptr, item, width, height);
		free(r);
		free(item);
		free(k_str);
		k++;
	}
}

void	display_coins(t_mlx_data *m, int i, int j)
{
	int	width;
	int	height;
	int	k;

	k = 0;
	display_ground(m, i, j);
	fill_coin_ptr(m, &width, &height, k);
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
			item, &width, &height);
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60 * j, 60
		* i);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
}
