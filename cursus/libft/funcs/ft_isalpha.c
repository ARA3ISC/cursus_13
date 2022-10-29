/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:09:23 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/27 10:33:43 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int nbr)
{
	return ((nbr >= 'a' && nbr <= 'z') || (nbr >= 'A' && nbr <= 'Z'));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_isalpha('z'));
// 	//return (0);
// }	done
