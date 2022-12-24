/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:44:05 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/24 06:28:37 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"
# include "./printf/ft_printf.h"

# define ESC 53


void	print_error(char *msg);
char	*read_map(void);
void	wall_validity(char *full_map);
void	check_items(char *full_map);
void	form_validity(char *full_map);
void	check_empty_lines(char *full_map);
void	check_arg(int argc, char **argv);
void	check_characters(char *full_map);

typedef struct node
{
	int	x;
	int	y;
}		player;

player	player_pos(char *full_map);
int		check_path(char *fmap, player p);
player	get_dimens(char **table_2d);


typedef	struct s_mlx_data
{
	void	*mlx_ptr;
	void	*wind_ptr;
	void	*img_ptr;
}		mlx_data;

#endif
