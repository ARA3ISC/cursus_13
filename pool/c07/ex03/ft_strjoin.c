  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:44:55 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/12 21:00:48 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(char *sep, int size, char **strs)
{
	int	total_len;
	int	i;

	total_len = str_len(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total_len += str_len(strs[i]);
		i++;
	}
	total_len++;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*new_ptr;

	if (size == 0)
	{
		return (malloc(sizeof(char)));
	}
	len = total_len(sep, size, strs);
	new_ptr = malloc(len * sizeof(char *));
	if (!new_ptr)
		return (NULL);
	else
	{
		ft_strcpy(new_ptr, strs[0]);
		i = 1;
		while (i < size)
		{
			ft_strcat(new_ptr, sep);
			ft_strcat(new_ptr, strs[i]);
			i++;
		}
	}
	return (new_ptr);
}
/*#include<stdio.h>
int main()
{
	
	char *strs[3] = {"arabi", "med", "simo"};
	char *sep = " - ";
	printf("%s", ft_strjoin(3, strs, sep));
	return 0;
}*/
