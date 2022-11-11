/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:36:30 by maneddam          #+#    #+#             */
/*   Updated: 2022/11/10 21:39:33 by maneddam         ###   ########.fr       */
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

char	*ft_strdup(char *s1)
{
	int		len;
	int		i;
	char	*ptr;

	if (!s1 || !*s1)
		return (0);
	len = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	//free(s1);
	return (ptr);
}

int	check_nl(char *line)
{
	int	i;

	i = 0;
	while (line && line[i])
	{
		if (line[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}

char	*free_zmmr(char **s1, char **s2)
{
	if (s1 && *s1)
	{
		free(*s1);
		*s1 = 0;
	}
	if (s2 && *s2)
	{
		free(*s2);
		*s2 = 0;
	}
	return (0);
}

char	*ft_strjoin(char *line, char *buf)
{
	char	*new_str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (buf == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(line) + ft_strlen(buf)) + 1);
	if (!new_str)
		return (free_zmmr(&line, &buf));
	while (++i < ft_strlen(line))
		new_str[i] = line[i];
	while (j < ft_strlen(buf))
		new_str[i++] = buf[j++];
	new_str[i] = '\0';
	free(line);
	return (new_str);
}
