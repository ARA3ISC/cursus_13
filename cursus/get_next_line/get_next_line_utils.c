/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:40:17 by maneddam          #+#    #+#             */
/*   Updated: 2022/11/14 21:41:51 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, char find)
{
	while (s && *s)
	{
		if (*s == find)
			return (s);
		s++;
	}
	return (NULL);
}

char	*free_zmmr(char **data, char **buff)
{
	if (data && *data)
	{
		free(*data);
		*data = NULL;
	}
	if (buff && *buff)
	{
		free(*buff);
		*buff = NULL;
	}
	return (NULL);
}

char	*ft_strdup(char *s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = (s1)[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *data, char *buff)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!data)
		return (ft_strdup(buff));
	new_str = malloc((ft_strlen(data) + ft_strlen(buff)) + 1);
	if (!new_str)
		return (free(data), free(buff), NULL);
	while (data[i])
	{
		new_str[i] = data[i];
		i++;
	}
	while (buff[j])
		new_str[i++] = buff[j++];
	new_str[i] = '\0';
	free(data);
	return (new_str);
}
