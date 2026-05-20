/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:19:26 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/20 17:59:57 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num)
{
	int		count;
	char	c;

	count = 0;
	if (num >= 10)
		count += ft_putunsigned(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
/* int main()
{
	ft_putunsigned(5);
	ft_putchar('\n');
	printf("%d\n", 5);
} */