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

#include "mlx.h"
#include "./libft/libft.h"
#include "./get_next_line/get_next_line.h"

char	*read_map()
{
	int i;
	int check;
	char *line;
	char *full_map;

	full_map = ft_calloc(1,1);
	int fd = open("map.ber", O_RDONLY);

	i = 0;
	check = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		full_map = ft_strjoin_get(full_map, line);
		check = 1;
	}
	if (!check || full_map[0] == '\n')
	{
		printf("Error\nNo line error !!");
		exit(1);
	}
	return (full_map);
}

void	wall_validity(char *full_map)
{
	char **table_2d;
	int table_len;
	int i;
	int error;

	error = 0;
	i = 0;

	table_2d = ft_split(full_map, '\n');
	while (table_2d[i] != NULL)
		i++;
	table_len = i;


	i = 0;
	// check the top of the map
	while (table_2d[0][i] != '\0')
	{
		if (table_2d[0][i] != '1')
			error = 1;
		i++;
	}
	i = 0;
	// check the bottom of the map
	while (table_2d[table_len - 1][i])
	{
		if (table_2d[table_len - 1][i] != '1')
			error = 1;
		i++;
	}
	i = 1;
	//check the left wall of the map
	while (table_2d[i] != NULL)
	{
		if (table_2d[i][0] != '1')
			error = 1;
		i++;
	}
	i = 1;
	// check the right wall of the map
	while (table_2d[i] != NULL)
	{
		if (table_2d[i][ft_strlen(table_2d[i]) - 1] != '1')
		{
			error = 1;
			printf("4\n");
		}
		i++;
	}
	//printf("len =%d\n",error);
	if (error)
	{
		printf("Error\nInvalid wall !!");
		exit(1);
	}
}

void	check_items(char *full_map)
{
	int i;
	int players;
	int doors;
	int collect;

	i = 0;
	players = 0;
	doors = 0;
	collect = 0;
	while (full_map[i])
	{
		if (full_map[i] == 'E')
			doors++;
		else if (full_map[i] == 'P')
			players++;
		else if (full_map[i] == 'C')
			collect++;
		else if ()
		i++;
	}
	if (doors != 1 || players != 1)
	{
		printf("Error\nIt must be just 1 door and 1 player !!");
		exit(1);
	}
	else if (collect == 0)
	{
		printf("Error\nIt must be at least 1 collectible !!");
		exit(1);
	}
}

void	form_validity(char *full_map)
{
	char **table_2d;
	int i;
	size_t table_len;

	table_2d = ft_split(full_map, '\n');
	table_len = ft_strlen(table_2d[0]);

	i = 0;
	while (table_2d[i] != NULL)
	{
		if (ft_strlen(table_2d[i]) != table_len)
		{
			printf("Error\nInvalid wall form !!");
			exit(1);
		}
		i++;
	}
}

void	check_empty_lines(char *full_map)
{
	int i;

	i = 0;
	while (full_map[i])
	{
		if (full_map[i] == '\n' && full_map[i + 1] == '\n')
		{
			printf("Error\nInvalid map form !!");
			exit(1);
		}
		i++;
	}
}

void	check_arg(int argc,char **argv)
{
	if (argc == 2)
	{
		int fd;
		int i;
		int j;

		fd = open(argv[1], O_RDONLY);
		i = 0;
		if (fd == -1)
		{
			printf("Error\nNo such file '%s'", argv[1]);
			exit(1);
		}
		while(argv[1][i])
			i++;
		i--;
		j = 0;
		if (argv[1][i] != 'r' || argv[1][--i] != 'e' || argv[1][--i] != 'b' || argv[1][--i] != '.')
		{
			printf("Error\nArgument file extension must be as follow '.ber' !!");
			exit(1);
		}
	}
	else
	{
		printf("Error\nIt must be exacly one argument !!");
		exit(1);
	}
}

int main(int argc, char **argv)
{
	char *fmap;

	fmap = read_map();
	check_arg(argc, argv);
	wall_validity(fmap);
	check_items(fmap);
	form_validity(fmap);
	check_empty_lines(fmap);

	return 0;
}
