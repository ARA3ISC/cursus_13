/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:32:49 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/04 18:24:43 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i] && i < n)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int main(){
	char str1[] = "holak";
	char str2[] = "hola";
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d", strncmp(str1, str2, 5));
}*/
