/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:22:22 by maneddam          #+#    #+#             */
/*   Updated: 2022/11/10 21:41:44 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*rtn_save(char **line, int pos, char **buf)
{
	char	*temp;
	char	*str;
	int		i;

	i = 0;
	str = malloc(pos + 1);
	if (!str)
		return (free(*buf), (free_zmmr(line, &str)));
	while (i < pos)
	{
		*(str + i) = *(*line + i);
		i++;
	}
	str[i] = '\0';
	temp = ft_strdup(*line + pos);
	free_zmmr(line, 0);
	*line = temp;
	return (free_zmmr(buf, 0), str);
}

char	*no_read(char **line)
{
	int		pos;
	char 	*temp;

	if (*line && !**line)
		return (free_zmmr(line, 0));
	pos = check_nl(*line);
	if (pos)
		return (rtn_save(line, pos, 0));
	temp = ft_strdup(*line);
	free_zmmr(line, 0);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buf;
	int			r;
	int			pos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free_zmmr(&line, 0));
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (free_zmmr(&line, 0));
	while (1)
	{
		r = read(fd, buf, BUFFER_SIZE);
		if (r == -1)
			return (free_zmmr(&buf, &line));
		if (r == 0)
			break;
		buf[r] = '\0';
		pos = check_nl(line);
		line = ft_strjoin(line, buf);
		if (pos)
			return (rtn_save(&line, pos, &buf));
	}
	free(buf);
	printf("OUT\n");
	return (no_read(&line));
}

int	main(void)
{
	int	fd;
	int i = 1;

	fd = open("arabi.txt", O_RDWR | O_CREAT);
	while (i < 10)
	{
		printf("line%d:%s\n",i,  get_next_line(fd));
		i++;
	}
	//system("leaks a.out");

}


