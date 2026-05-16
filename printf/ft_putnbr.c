/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:44:38 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/16 19:08:25 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int count;
	char c;
	long	i;
	
	count = 0;
	i = n;
	if (n < 0)
	{
		write(1, '-', 1);
		i = -i;
		count++;
	}
	if (n > 9)
		count += ft_putnbr(i / 10);
	c = ft_putnbr(i % 10) + '0';
	write (1, &c, 1);
	count++;
	return (count);
}
/* int main()
{
	printf("%d\n" ,ft_putnbr(24));
	ft_putchar('\n');
	printf("%d\n", 24);
} */