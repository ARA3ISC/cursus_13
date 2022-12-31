/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:36:52 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/30 03:15:47 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x - 1][y] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		ft_printf("You won !!");
		exit(0);
	}
	else if (m->table_2d[x - 1][y] != '1' && m->table_2d[x - 1][y] != 'E')
	{
		if (m->table_2d[x - 1][y] == 'C')
		{
			count++;
			m->table_2d[x - 1][y] = '0';
		}
		swap_img_up(m, x - 1, y);
		ft_printf("%d\n", ++*c);
		display_map(m->table_2d, m);
	}
	return (count);
}

int	move_right(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x][y + 1] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		ft_printf("You won !!");
		exit(0);
	}
	if (m->table_2d[x][y + 1] != '1' && m->table_2d[x][y + 1] != 'E')
	{
		if (m->table_2d[x][y + 1] == 'C')
		{
			count++;
			m->table_2d[x][y + 1] = '0';
		}
		swap_img_right(m, x, y + 1);
		ft_printf("%d\n", ++*c);
		display_map(m->table_2d, m);
	}
	return (count);
}

int	move_down(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x + 1][y] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		ft_printf("You won !!");
		exit(0);
	}
	if (m->table_2d[x + 1][y] != '1' && m->table_2d[x + 1][y] != 'E')
	{
		if (m->table_2d[x + 1][y] == 'C')
		{
			count++;
			m->table_2d[x + 1][y] = '0';
		}
		swap_img_down(m, x + 1, y);
		ft_printf("%d\n", ++*c);
		display_map(m->table_2d, m);
	}
	return (count);
}

int	move_left(t_mlx_data *m, int check, int *c)
{
	int	x;
	int	y;
	int	count;

	count = 0;
	x = player_pos(m->table_2d).x;
	y = player_pos(m->table_2d).y;
	if (m->table_2d[x][y - 1] == 'E' && check == 1)
	{
		ft_printf("%d\n", ++*c);
		ft_printf("You won !!");
		exit(0);
	}
	if (m->table_2d[x][y - 1] != '1' && m->table_2d[x][y - 1] != 'E')
	{
		if (m->table_2d[x][y - 1] == 'C')
		{
			count++;
			m->table_2d[x][y - 1] = '0';
		}
		swap_img_left(m, x, y - 1);
		ft_printf("%d\n", ++*c);
		display_map(m->table_2d, m);
	}
	return (count);
}
