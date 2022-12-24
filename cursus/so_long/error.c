/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:55:06 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/24 01:24:20 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_error(char *msg)
{
	printf("%s", msg);
	exit(1);
}

void	check_arg(int argc, char **argv)
{
	int	fd;
	int	i;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		i = 0;
		if (fd == -1)
		{
			printf("Error\nNo such file '%s'", argv[1]);
			exit(1);
		}
		while (argv[1][i])
			i++;
		i--;
		if (argv[1][i] != 'r' || argv[1][--i] != 'e' || argv[1][--i] != 'b'
			|| argv[1][--i] != '.')
			print_error("Error\nArgument extension must be as follow '.ber' !!");
	}
	else
	{
		printf("Error\nIt must be exacly one argument !!");
		exit(1);
	}
}

void	check_characters(char *full_map)
{
	int	i;

	i = 0;
	while (full_map[i])
	{
		if (full_map[i] != '1' && full_map[i] != '0' &&
			full_map[i] != 'E' && full_map[i] != 'P' && full_map[i] != 'C'
				&& full_map[i] != '\n')
			print_error("Error \nInvalid character !!");
		i++;
	}
}

player	player_pos(char *full_map)
{
	player	p;
	char	**table_2d;
	int		i;
	int		j;

	p.x = 0;
	p.y = 0;
	table_2d = ft_split(full_map, '\n');
	i = 0;
	j = 0;
	while (table_2d[i])
	{
		j = 0;
		while (table_2d[i][j])
		{
			if (table_2d[i][j] == 'P')
			{
				p.x = i;
				p.y = j;
				return (p);
			}
			j++;
		}
		i++;
	}
	return (p);
}

// int	check_path(player p, char *fmap)
// {
// 	char		**table_2d;
// 	static int	count;

// 	table_2d = ft_split(fmap, '\n');

// 	// printf("%d\n", ft_strlen(table_2d[0]));
// 	// exit(0);
// 	// top
// 	if (table_2d[p.x][p.y] == '0' || table_2d[p.x][p.y] == 'C'
			//|| table_2d[p.x][p.y] == 'P')
// 	{
// 		if (p.x == 1 || p.x == 5 || p.y == 1 || p.y == 11)
// 		{
// 			return (count);
// 		}
// 		if (table_2d[(p.x) - 1][p.y] == 'C')
// 			count++;
// 		p.x = p.x - 1;
// 		count += check_path(p, fmap);
// 		p.x = p.x + 1;
// 		count += check_path(p, fmap);
// 		p.y = p.y + 1;
// 		count += check_path(p, fmap);
// 		p.y = p.y - 1;
// 		count += check_path(p, fmap);
// 		if (table_2d[(p.x) - 1][p.y] == '1')
// 			return (count);
// 	}
// 	else
// 		return (count);
// 	return (count);
// }

int	check_path(char *fmap, player p)
{
	char	**table_2d;
	int		height;
	int		width;
	int		i;
	int		j;
	int		count;

	count = 0;
	table_2d = ft_split(fmap, '\n');
	height = get_dimens(table_2d).x;
	width = get_dimens(table_2d).y;
	i = p.x;
	j = p.y;
	//printf("%c\n", table_2d[i][j]);

	if (i < height && j < width)
	{
		if (table_2d[i][j] == 'P' || table_2d[i][j] == 'C' || table_2d[i][j] == 'E' || table_2d[i][j] == '0' || table_2d[i][j] == '1')
		{
			printf("(i=%d,j=%d)", i, j);
			if (table_2d[i][j] == '1')
				return (count);

			if (table_2d[i][j] == 'C')
				count++;
			p.x = i + 1;
			count += check_path(fmap, p);
			if (table_2d[p.x][p.y] == '1')
				p.x = i - 1;
			p.y = j + 1;
			count += check_path(fmap, p);
			if (table_2d[p.x][p.y] == '1')
				p.y = j - 1;
			p.x = i - 1;
			count += check_path(fmap, p);
			if (table_2d[p.x][p.y] == '1')
				p.x = i + 1;
			p.y = j - 1;
			count += check_path(fmap, p);
			if (table_2d[p.x][p.y] == '1')
				p.y = j + 1;
		}
	}
	return (count);
}
