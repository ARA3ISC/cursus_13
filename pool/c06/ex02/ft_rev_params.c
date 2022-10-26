/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:11:18 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/06 16:45:13 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 0)
	{
		i = 0;
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j] != '\0')
			{
				write(1, &argv[argc - 1][j], 1);
				j++;
			}
			i++;
			argc--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
