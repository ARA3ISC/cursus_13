/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:29:41 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 23:43:10 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*search_ndl(char *hstk, const char *ndl, size_t i, size_t len)
// {
// 	size_t	j;
// 	size_t	k;
// 	int		exist;

// 	j = 1;
// 	exist = 1;
// 	k = i;
// 	while (ndl[j])
// 	{
// 		if (ndl[j] != hstk[k + 1] || (k + 1) == len)
// 		{
// 			exist = 0;
// 			k = i + 1;
// 			continue ;
// 			//break ;
// 		}
// 		else if (k == len)
// 			return (NULL);
// 		j++;
// 		k++;
// 	}
// 	if (exist == 1)
// 		return (&hstk[i]);
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hstk;
	char	*ndl;

	hstk = (char *)haystack;
	ndl = (char *)needle;
	if (ndl[0] == '\0')
		return (hstk);
	if (len == 0)
		return (NULL);
	i = 0;
	while (hstk[i] && i < len)
	{
		if (ndl[0] == hstk[i])
		{
			j = 0;
			while (hstk[i + j] == ndl[j] && i + j < len)
			{
				if (ndl[j + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*haystack;
// 	char	*needle;

// 	haystack = "aaabcabcd";
// 	needle = "";
// 	printf("%s\n", (ft_strnstr(haystack, needle, -6)));
// 	printf("%s\n", (strnstr(haystack, needle, -6)));
// 	return (0);
// }
