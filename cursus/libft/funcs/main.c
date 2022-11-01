/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:39:50 by maneddam          #+#    #+#             */
/*   Updated: 2022/11/01 15:42:16 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	fd;

	fd = open("hassan.txt", O_RDWR | O_CREAT);
	write(fd, "arabi", 5);
	printf("%d", fd);
}

void	f(void *content)
{
	printf("%s\n", content);
}

int	main(void)
{
	t_list	*p;
	t_list	*k;
	t_list	*j;
	t_list	*h;

	p = ft_lstnew(ft_strdup("hello"));
	k = ft_lstnew(ft_strdup("kkkkkk"));
	j = ft_lstnew(ft_strdup("bbbbbb"));
	p->next = k;
	p->next->next = j;
	p->next->next->next = NULL;
	j->next = NULL;
	h = ft_lstnew("lllllll");
	ft_lstadd_front(&p, h);
	printf("%s", h->content);
	ft_lstiter(p, f);
}
