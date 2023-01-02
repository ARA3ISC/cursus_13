/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 02:09:56 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/02 04:56:19 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill_enemy_ptr(t_mlx_data *m, int *width, int *height, int k)
{
	char *k_str;
	char *extension;
	char *path;
	char *r;
	char *item;

	extension = ".xpm";
	path = "./res/enemy/nebta";
	k = 0;
	while (k < 18)
	{
		k_str = ft_itoa(k);
		r = ft_strjoin(path, k_str);
		item = ft_strjoin(r, extension);
		m->enemy_ptr[k] = mlx_xpm_file_to_image(m->mlx_ptr, item, width, height);
		free(r);
		free(item);
		free(k_str);
		k++;
	}
}

void	display_enemy(t_mlx_data *m, int i, int j)
{
	int	width;
	int	height;
	int k;

	k = 0;
	display_ground(m, i, j);
	fill_enemy_ptr(m, &width, &height, k);
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->enemy_ptr[m->index_en], 60
			* j, 60 * i);
	if (!m->enemy_ptr[m->index_en])
		print_error("Error : corrupted xpm");
}
