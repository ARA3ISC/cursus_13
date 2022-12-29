/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 01:06:00 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/28 21:04:21 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_c(char **table_2d)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	j = 0;
	while (table_2d[i])
	{
		j = 0;
		while (table_2d[i][j])
		{
			if (table_2d[i][j] == 'C')
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	check_collect_path(char **table_2d, int x, int y)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = x;
	j = y;
	if (i > get_dimens(table_2d).x || j > get_dimens(table_2d).y)
		return (count);
	if (table_2d[i][j] == '1' || table_2d[i][j] == 'x' || table_2d[i][j] == 'E')
		return (count);
	if (table_2d[i][j] == '0' || table_2d[i][j] == 'C' || table_2d[i][j] == 'P')
	{
		if (table_2d[i][j] == 'C')
			count++;
		table_2d[i][j] = 'x';
		count += check_collect_path(table_2d, i - 1, j);
		count += check_collect_path(table_2d, i, j + 1);
		count += check_collect_path(table_2d, x + 1, y);
		count += check_collect_path(table_2d, x, y - 1);
	}
	return (count);
}

int	check_exit_path(char **table_2d, int x, int y)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = x;
	j = y;
	if (i > get_dimens(table_2d).x || j > get_dimens(table_2d).y)
		return (count);
	if (table_2d[i][j] == '1' || table_2d[i][j] == 'x')
		return (count);
	if (table_2d[i][j] == '0' || table_2d[i][j] == 'C' || table_2d[i][j] == 'P'
		|| table_2d[i][j] == 'E')
	{
		if (table_2d[i][j] == 'E')
			count++;
		table_2d[i][j] = 'x';
		count += check_exit_path(table_2d, i - 1, j);
		count += check_exit_path(table_2d, i, j + 1);
		count += check_exit_path(table_2d, x + 1, y);
		count += check_exit_path(table_2d, x, y - 1);
	}
	return (count);
}
