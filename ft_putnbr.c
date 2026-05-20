/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:44:38 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/20 17:58:37 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	char	c;
	long	i;

	count = 0;
	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
		count++;
	}
	if (i > 9)
		count += ft_putnbr(i / 10);
	c = (i % 10) + '0';
	ft_putchar(c);
	count++;
	return (count);
}
/* #include <limits.h>
int main()
{
	// printf("%d\n" ,ft_putnbr(24));
	// ft_putchar('\n');
	// printf("%d\n", 24);
// 	ft_printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", INT_MAX, INT_MIN, LONG_MAX, 
// LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("%d\n", -12);
} */