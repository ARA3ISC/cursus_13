/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:24:42 by maneddam          #+#    #+#             */
/*   Updated: 2022/11/04 05:43:46 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
	int i;
	int len;

	va_list list;

	va_start(list, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				len += ft_putchar(va_arg(list, int));
			else if (s[i] == 's')
				len += ft_putstr(va_arg(list, char *));
			else if (s[i] == 'd' || s[i] == 'i')
				len += ft_putnbr(va_arg(list, int), "0123456789");
			else if (s[i] == 'u')
				len += ft_putnbr_u_dec(va_arg(list, unsigned int), "0123456789");
			else if (s[i] == 'p')
			{
				len += ft_putstr("0x");
				len += ft_putnbr(va_arg(list,unsigned long),"0123456789abcdef");
			}

		}
		else
		{
			ft_putchar(s[i]);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}

// int main()
// {
// 	// int x = ft_printf("string '%s' %c\n","dima koukab", 'X');
// 	// int y = printf("string '%s' %c\n","dima koukab", 'X');
// 	char c = 'z';
// 	char *p = &c;
// 	// ft_printf("testing pointer %p\n", p);
// 	printf("testing pointer %lu", p);

// 	// printf("%d\n", x);
// 	// printf("%d", y);
// 	//printf("%d",i);

// }
