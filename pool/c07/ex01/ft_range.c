/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:43:19 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/12 18:49:32 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
		return (NULL);
	ptr = malloc(size * sizeof(int));
	if (!ptr)
		return (0);
	else
	{
		i = 0;
		while (i < size)
		{
			ptr[i] = min;
			i++;
			min++;
		}
	}
	return (ptr);
}
/*#include<stdio.h>
int main()
{
	int *p;
	p = ft_range(10, 20);
	
	//printf("%d", *ft_range(20, 10));	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", p[i]);
	}
}*/
