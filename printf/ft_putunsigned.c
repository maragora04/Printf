/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:19:26 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/15 18:04:14 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_putunsigned(num / 10);
	count += ft_putchar(num % 10 + '0');
	return (count);
}
/* int main()
{
	ft_putunsigned(5);
	ft_putchar('\n');
	printf("%d\n", 5);
} */