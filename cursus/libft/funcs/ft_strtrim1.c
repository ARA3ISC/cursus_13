/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:30:54 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 16:38:49 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim1(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, i, len - i + 1));
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%s", ft_strtrim1("lorem ipsum dolor sit amet", "tel"));
// 	return (0);
// }
