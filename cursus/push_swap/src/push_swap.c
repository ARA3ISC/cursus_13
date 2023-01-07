/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:53:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/07 21:14:04 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*join_args(int argc, char **argv)
{
	int		i;
	char	*line;

	i = 1;
	line = NULL;
	while (i < argc)
	{
		if (!argv[i][0])
			print_error("Error");
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
		if (nb > INT_MAX || nb < INT_MIN)
			print_error("Error");
		if (i == 0)
			stack_a = mylst_new(nb);
		else
			mylstadd_back(&stack_a, mylst_new(nb));
		i++;
	}
	ft_free(tab2d);
	return stack_a;
}
// verify this test 5+8

void	choose_func(t_node	*stack_a, t_node *stack_b)
{
	int c;

	c = count_args(stack_a);
	if (c > 1 && c <= 3)
		sort_three(&stack_a, &stack_b);
	// else if (c > 3 && c <= 5)
	// 	sort_five();
	// else if (c > 5 && c <= 100)
	// 	sort_hundred();
}

int main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*head;
	char	**tab2d;
	char	*one_arg;
	if (argc > 2)
	{
		one_arg = join_args(argc, argv);
		tab2d = ft_split(one_arg, ' ');

		check_arg(one_arg, tab2d);
		stack_a = fill_stack(one_arg);
		stack_b = fill_stack(one_arg);


		head = stack_a;

		ft_printf("<----- before sort ----->\n");
		while (stack_a != NULL)
		{
			ft_printf("%d   ", stack_a->content);
			stack_a = stack_a->next;
		}
		stack_a = head;
		choose_func(stack_a, stack_b);

		ft_printf("\n\n<----- after sort ----->\n");
		while (stack_a != NULL)
		{
			ft_printf("%d   ", stack_a->content);
			stack_a = stack_a->next;
		}
		free(one_arg);
		ft_free(tab2d);
	}
	// system("leaks push_swap");
}
