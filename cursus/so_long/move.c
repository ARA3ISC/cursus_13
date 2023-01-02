/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:36:52 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/02 03:22:11 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;
	char *itoa_str;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x - 1][y] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		free(ft_itoa(*c));
		print_error("You won !!");
	}
	else if (m->table_2d[x - 1][y] != '1' && m->table_2d[x - 1][y] != 'E')
	{
		if (m->table_2d[x - 1][y] == 'I')
			print_error("You died !!");
		if (m->table_2d[x - 1][y] == 'C')
		{
			count++;
			m->table_2d[x - 1][y] = '0';
		}
		swap_img_up(m, x - 1, y);
		ft_printf("%d\n", ++*c);
		display_wall(m, 0, get_dimens(m->table_2d).y / 2);
		itoa_str = ft_itoa(*c);
		mlx_string_put(m->mlx_ptr, m->wind_ptr, get_dimens(m->table_2d).y * 60
				/ 2, 25, 0xfffffff, itoa_str);
		display_ground(m, x, y);
		display_other_items(m, "./res/lhero.xpm", x - 1, y);
		free(itoa_str);
	}
	return (count);
}

int	move_right(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;
	char *itoa_str;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x][y + 1] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		free(ft_itoa(*c));
		print_error("You won !!");
	}
	if (m->table_2d[x][y + 1] != '1' && m->table_2d[x][y + 1] != 'E')
	{
		if (m->table_2d[x][y + 1] == 'I')
			print_error("You died !!");
		if (m->table_2d[x][y + 1] == 'C')
		{
			count++;
			m->table_2d[x][y + 1] = '0';
		}
		swap_img_right(m, x, y + 1);
		ft_printf("%d\n", ++*c);
		display_wall(m, 0, get_dimens(m->table_2d).y / 2);
		itoa_str = ft_itoa(*c);
		mlx_string_put(m->mlx_ptr, m->wind_ptr, get_dimens(m->table_2d).y * 60
				/ 2, 25, 0xfffffff, itoa_str);
		display_ground(m, x, y);
		display_other_items(m, "./res/lhero.xpm", x, y + 1);
		free(itoa_str);
	}
	return (count);
}

int	move_down(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;
	char *itoa_str;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x + 1][y] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		free(ft_itoa(*c));
		print_error("You won !!");
	}
	if (m->table_2d[x + 1][y] != '1' && m->table_2d[x + 1][y] != 'E')
	{
		if (m->table_2d[x + 1][y] == 'I')
			print_error("You died !!");
		if (m->table_2d[x + 1][y] == 'C')
		{
			count++;
			m->table_2d[x + 1][y] = '0';
		}
		swap_img_down(m, x + 1, y);
		ft_printf("%d\n", ++*c);
		display_wall(m, 0, get_dimens(m->table_2d).y / 2);
		itoa_str = ft_itoa(*c);
		mlx_string_put(m->mlx_ptr, m->wind_ptr, get_dimens(m->table_2d).y * 60
				/ 2, 25, 0xfffffff, itoa_str);
		display_ground(m, x, y);
		display_other_items(m, "./res/lhero.xpm", x + 1, y);
		free(itoa_str);
	}
	return (count);
}

int	move_left(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;
	char *itoa_str;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x][y - 1] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		free(ft_itoa(*c));
		print_error("You won !!");
	}
	if (m->table_2d[x][y - 1] != '1' && m->table_2d[x][y - 1] != 'E')
	{
		if (m->table_2d[x][y - 1] == 'I')
			print_error("You died !!");
		if (m->table_2d[x][y - 1] == 'C')
		{
			count++;
			m->table_2d[x][y - 1] = '0';
		}
		swap_img_left(m, x, y - 1);
		ft_printf("%d\n", ++*c);
		display_wall(m, 0, get_dimens(m->table_2d).y / 2);
		itoa_str = ft_itoa(*c);
		mlx_string_put(m->mlx_ptr, m->wind_ptr, get_dimens(m->table_2d).y * 60
				/ 2, 25, 0xfffffff, itoa_str);
		display_ground(m, x, y);
		display_other_items(m, "./res/lhero.xpm", x, y - 1);
		free(itoa_str);
	}
	return (count);
}
