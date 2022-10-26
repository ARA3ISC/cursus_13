/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:16:01 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/14 10:18:52 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*cpy_str(char *str, int size)
{
	char	*p;
	int		i;

	p = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			i;
	int			strlen;

	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		strlen = str_len(av[i]);
		ptr[i].size = strlen;
		ptr[i].str = av[i];
		ptr[i].copy = cpy_str(av[i], strlen);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
/*#include <stdio.h>
int main()
{
	int i = 0;
	t_stock_str *p;
	char *tab[3] = {"arabi", "med", "flan ben flan"};

	p = ft_strs_to_tab(3, tab);
	while (i < 3)
	{
		printf("%s\t%d\t%s\n", p[i].str, p[i].size, p[i].copy);
		i++;
	}
	return 0;
}*/
