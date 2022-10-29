/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:27:56 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/26 18:37:22 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s;

// 	s = NULL;
// 	printf("%zu", ft_strlen(s));
// 	return (0);
// }
