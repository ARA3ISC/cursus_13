/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:44:05 by maneddam          #+#    #+#             */
/*   Updated: 2022/12/29 23:49:14 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"
# include "./printf/ft_printf.h"
# include "mlx.h"

# define ESC 53
# define RIGHT 124
# define LEFT 123
# define UP 126
# define DOWN 125

void		print_error(char *msg);
char		*read_map();
void		wall_validity(char *full_map);
void		check_items(char *full_map);
void		form_validity(char *full_map);
void		check_empty_lines(char *full_map);
void		check_arg(int argc, char **argv);
void		check_characters(char *full_map);

typedef struct node
{
	int		x;
	int		y;
}			t_player;

t_player	player_pos(char **table_2d);
int			check_collect_path(char **table_2d, int x, int y);
int			check_exit_path(char **table_2d, int x, int y);
t_player	get_dimens(char **table_2d);
void		check_player_path(char **table_2d, char *fmap, t_player p);
int			count_c(char **table_2d);

typedef struct s_mlx_data
{
	void	*mlx_ptr;
	void	*wind_ptr;
	void	*img_ptr;
	char	**table_2d;
}			t_mlx_data;

typedef struct s_collected
{
	int		count;
	int		move;
}			t_collected;

int			move_up(t_mlx_data *m, int check, int *move);
int			move_right(t_mlx_data *m, int check, int *move);
int			move_down(t_mlx_data *m, int check, int *move);
int			move_left(t_mlx_data *m, int check, int *move);
void		display_map(char **table_2d, t_mlx_data *m);

void		swap_img_up(t_mlx_data *m, int x, int y);
void		swap_img_right(t_mlx_data *m, int x, int y);
void		swap_img_down(t_mlx_data *m, int x, int y);
void		swap_img_left(t_mlx_data *m, int x, int y);

void		display_ground(t_mlx_data *m, int i, int j);
void		display_wall(t_mlx_data *m, int i, int j);
void		display_other_items(t_mlx_data *m, char *item, int i, int j);
#endif
