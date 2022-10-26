/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:35:17 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 16:35:53 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((ps1)[i] != (ps2)[i])
			return ((ps1)[i] - (ps2)[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	//char s1[] = "ara'\0'bie";
// 	//char s2[] = "ara'\0'aie";

// 	/*int s1[] = {1, 2, 3, 8};
// 	int s2[] = {1, 2, 3, 5};*/

// 	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
// 	printf("%d\n", memcmp("t\200", "t\0", 2));

// 	return (0);
// }
