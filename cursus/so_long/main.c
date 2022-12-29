/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:34:46 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/22 04:39:48 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line/get_next_line.h"
#include "./libft/libft.h"
#include "./printf/ft_printf.h"
#include "mlx.h"
#include "so_long.h"

void	checking(int argc, char **argv)
{
	char		*fmap;
	t_player	p;
	char		**table_2d;

	fmap = read_map();
	table_2d = ft_split(fmap, '\n');
	p = player_pos(table_2d);
	check_arg(argc, argv);
	wall_validity(fmap);
	check_items(fmap);
	form_validity(fmap);
	check_empty_lines(fmap);
	check_characters(fmap);
	check_player_path(table_2d, fmap, p);
}

void	display_img(t_mlx_data *m, char *item, int i, int j)
{
	int	width;
	int	height;

	m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr, item,
			&width, &height);
	if (!m->img_ptr)
		print_error("Error : corrupted xpm");
	mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60
		* j, 60 * i);
}

void	display_map(char **table_2d, t_mlx_data *m)
{
	int	width;
	int	height;
	int	i;
	int	j;

	i = 0;
	while (table_2d[i])
	{
		j = 0;
		while (table_2d[i][j])
		{
			if (table_2d[i][j] == '1')
				display_img(m, "./res/l7it.xpm", i, j);
			else if (table_2d[i][j] == '0')
				display_img(m, "./res/l2ard.xpm", i, j);
			else if (table_2d[i][j] == 'P')
			{
				m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr,
						"./res/l2ard.xpm", &width, &height);
				mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60
					* j, 60 * i);
				display_img(m, "./res/lhero.xpm", i, j);
			}
			else if (table_2d[i][j] == 'C')
			{
				m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr,
						"./res/l2ard.xpm", &width, &height);
				mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60
					* j, 60 * i);
				display_img(m, "./res/lcollectible.xpm", i, j);
			}
			else if (table_2d[i][j] == 'E')
			{
				m->img_ptr = mlx_xpm_file_to_image(m->mlx_ptr,
						"./res/l2ard.xpm", &width, &height);
				mlx_put_image_to_window(m->mlx_ptr, m->wind_ptr, m->img_ptr, 60
					* j, 60 * i);
				display_img(m, "./res/lbab.xpm", i, j);
			}
			j++;
		}
		i++;
	}
}

int	exec(int keycode, t_mlx_data *m)
{
	t_player	p;
	static int	count;
	static int	check;

	check = 0;
	p = player_pos(m->table_2d);
	if (keycode == ESC)
	{
		ft_printf("Game has exit using ESC key");
		mlx_destroy_window(m->mlx_ptr, m->wind_ptr);
		exit(0);
	}
	if (count == count_c(ft_split(read_map(), '\n')))
		check = 1;
	if (keycode == UP)
		count += move_up(m, check);
	if (keycode == RIGHT)
		count += move_right(m, check);
	if (keycode == DOWN)
		count += move_down(m, check);
	if (keycode == LEFT)
		count += move_left(m, check);
	return (count);
}

int	main(int argc, char **argv)
{
	t_mlx_data	m;
	t_player	p;

	m.table_2d = ft_split(read_map(), '\n');
	p = get_dimens(m.table_2d);
	checking(argc, argv);
	m.mlx_ptr = mlx_init();
	m.wind_ptr = mlx_new_window(m.mlx_ptr, 60 * p.y, 60 * p.x, "game 2D");
	display_map(m.table_2d, &m);
	mlx_hook(m.wind_ptr, 2, 0, exec, &m);
	mlx_loop(m.mlx_ptr);
	return (0);
}
