/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:44:38 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/15 18:32:18 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putchar(n);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
		ft_putchar(n);
	}
	else
	{
		n = n + '0';
		ft_putchar(n);
	}
	return (0);
}
/* int main()
{
	printf("%d\n" ,ft_putnbr(24));
	ft_putchar('\n');
	printf("%d\n", 24);
} */