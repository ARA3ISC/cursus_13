/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:53:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/04 22:56:07 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(int argc, char *argv[])
{
	int	i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != 32 && argv[i][j] != '-')
				print_error("Invalid argument format");
			j++;
		}
		i++;
	}
}


void	fill_stack(int argc, char **argv)
{
	t_node	*p;
	int		i;
	int 	j;
	char	**tab_2d;
	int	nb;

	i = 1;
	nb = 0;
	p = mylst_new(nb);
	while (i < argc)
	{
		j = 0;
		tab_2d = ft_split(argv[i], ' ');
		while (tab_2d[j])
		{
			nb = ft_atoi(tab_2d[j]);
			if (nb > INT_MAX || nb < INT_MIN)
				print_error("Invalid number range");
			printf("hhhh\n");
			mylstadd_back(&p, p);
			p->next = NULL;
			p = p->next;
			j++;
		}
		//p = p->next;
		ft_free(tab_2d);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		// ft_printf("haha\n");
		check_arg(argc, argv);
		fill_stack(argc, argv);
	}
}
