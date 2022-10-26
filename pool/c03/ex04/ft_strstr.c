/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:44:03 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/05 01:53:25 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			j = 0;
			if (str[i] == to_find[j])
			{
				while (str[i + j] == to_find[j])
				{
					j++;
					if (to_find[j] == '\0')
						return (str + i);
				}
			}
			i++;
		}
	}
	return (0);
}
/*int main()
{
	char str[] = "arabi";
	char a[] = "ra";
	printf("%s", ft_strstr(str,a));
	return 0;
}*/
