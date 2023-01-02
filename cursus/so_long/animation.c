/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 05:50:34 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/02 05:53:38 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_map(char **table_2d, t_mlx_data *m)
{
	int	i;
	int	j;

	i = 0;
	while (table_2d[i])
	{
		j = 0;
		while (table_2d[i][j])
		{
			if (table_2d[i][j] == '1')
				display_wall(m, i, j);
			else if (table_2d[i][j] == '0')
				display_ground(m, i, j);
			else if (table_2d[i][j] == 'P')
				display_other_items(m, "./res/lhero.xpm", i, j);
			else if (table_2d[i][j] == 'C')
				display_other_items(m, "./res/lcollectible.xpm", i, j);
			else if (table_2d[i][j] == 'E')
				display_other_items(m, "./res/lbab.xpm", i, j);
			else if (table_2d[i][j] == 'I')
				display_other_items(m, "./res/enemy/nebta0.xpm", i, j);
			j++;
		}
		i++;
	}
}

void	rotate_img(t_mlx_data *m)
{
	int	i;
	int	j;

	i = 0;
	while (m->table_2d[i])
	{
		j = 0;
		while (m->table_2d[i][j])
		{
			if (m->table_2d[i][j] == 'C')
				display_coins(m, i, j);
			else if (m->table_2d[i][j] == 'I')
				display_enemy(m, i, j);
			j++;
		}
		i++;
	}
}