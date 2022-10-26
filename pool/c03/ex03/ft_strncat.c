/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:03:36 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/03 23:40:20 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if (j < nb)
		{
			dest[i] = src[j];
		}
		else
		{
			break ;
		}	
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
int main()
{
	char src[] = "arabi";
	char dest[] = "med";
	printf("%s", ft_strncat(dest, src, 1));
	return 0;
}*/
