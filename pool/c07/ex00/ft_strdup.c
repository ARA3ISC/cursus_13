/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:32:53 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/12 18:34:35 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] < '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	len = str_len(src);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	printf("%s\t", ft_strdup("arabi"));
	printf("%s", strdup("arabi"));

	return 0;
}*/
