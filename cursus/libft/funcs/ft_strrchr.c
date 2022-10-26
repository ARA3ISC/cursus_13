/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:00:34 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/26 11:01:21 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			ptr = (char *)&s[i];
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str;
// 	char	c;

// 	str = "";
// 	c = '\0';
// 	printf("%s", ft_strrchr(str, c));
// 	return (0);
// }
