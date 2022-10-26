/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:06:54 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/13 01:56:34 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		ptr = NULL;
		return (0);
	}
	ptr = malloc(size * sizeof(int));
	if (!ptr)
		return (-1);
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
	*range = ptr;
	return (size);
}
/*#include<stdio.h>
int main()
{
	int *p;
	
	printf("%d\n", ft_ultimate_range(&p, 2, 9));
	for (int i = 0; i < 7; i++)
	{
		printf("%d\t", p[i]);
	}
	return 0;
}*/
