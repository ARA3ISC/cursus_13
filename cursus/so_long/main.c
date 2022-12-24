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
// #include "./res/hero.xpm"
#include "./printf/ft_printf.h"
#include "mlx.h"
#include "so_long.h"


void	checking(int argc, char **argv)
{
	char	*fmap;
	//player p;


	fmap = read_map();

	//p = player_pos(fmap);
	check_arg(argc, argv);
	wall_validity(fmap);
	check_items(fmap);
	form_validity(fmap);
	check_empty_lines(fmap);
	check_characters(fmap);
	//ft_printf("there is %d of C", check_path(fmap, p));

	//ft_printf("position x: %d, position y: %d\n", player_pos(fmap).x ,player_pos(fmap).y);
}



int exec(int keycode, mlx_data *m)
{
	if (keycode == ESC)
	{
		ft_printf("Game has exit using ESC key");
		mlx_destroy_window(m->mlx_ptr, m->wind_ptr);
		exit(0);
	}
	return 0;
}

int	main(int argc, char **argv)
{
	mlx_data m;
	char *img_path;
	int width;
	int height;
	img_path = "hero.xpm";

	width = 50;
	height = 80;
	checking(argc, argv);

	m.mlx_ptr = mlx_init();
	m.wind_ptr = mlx_new_window(m.mlx_ptr, 1200, 800, "game 2D");

	mlx_hook(m.wind_ptr, 2, 0, exec, &m);
	mlx_xpm_file_to_image(m.mlx_ptr, img_path, &width, &height);

	mlx_loop(m.mlx_ptr);
	return (0);
}
