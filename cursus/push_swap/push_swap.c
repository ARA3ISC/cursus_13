/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:53:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/06 16:06:52 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_args(int argc, char **argv)
{
	int		i;
	char	*line;

	i = 1;
	line = NULL;
	while (i < argc)
	{
		if (!argv[i][0])
			print_error("Invalid num");
		line = ft_strjoin(line, " ");
		line = ft_strjoin(line, argv[i]);
		i++;
	}
	return line;
}

t_node	*fill_stack(char *one_arg)
{
	t_node	*stack_a;
	long		nb;
	char	**tab2d;
	int		i;

	i = 0;

	tab2d = ft_split(one_arg, ' ');
	while (tab2d[i])
	{
		nb = ft_atoi(tab2d[i]);
		// printf("this is nb:%ld\n", nb);
		if (nb > INT_MAX || nb < INT_MIN)
			print_error("Invalid num");
		if (i == 0)
			stack_a = mylst_new(nb);
		else
			mylstadd_back(&stack_a, mylst_new(nb));
		i++;
	}
	ft_free(tab2d);
	return stack_a;
}


int main(int argc, char *argv[])
{
	t_node	*stack_a;
	char	**tab2d;
	char	*one_arg;
	if (argc > 2)
	{

		one_arg = join_args(argc, argv);
		tab2d = ft_split(one_arg, ' ');

		check_arg(one_arg, tab2d);
		stack_a = fill_stack(one_arg);


		while (stack_a != NULL)
		{
			printf("%d\n", stack_a->content);
			stack_a = stack_a->next;
		}
		free(one_arg);
		ft_free(tab2d);
	}
	// system("leaks push_swap");
}
