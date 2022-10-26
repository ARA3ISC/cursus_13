/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:01:55 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 16:38:11 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char f(unsigned int index, char c)
// {
//     c = 'X';
//     (void)index;
//     return (c);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	slen;
	char	*ptr;

	slen = ft_strlen(s);
	ptr = malloc(sizeof(char) * slen + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// #include <stdio.h>
// int main()
// {

//     printf("%s", ft_strmapi("arabikaoutar<3", f));
// }
