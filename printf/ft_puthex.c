/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:34:35 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/15 18:08:43 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, int uppercase)
{
	char	*base;
	int		count;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		count += ft_puthex(num / 16, uppercase);
	count += ft_putchar(base[num % 16]);
	return (count);
}
/* int main()
{
    printf("%x\n", 255);
    ft_puthex(255, 0);
	ft_putchar('\n');

    printf("%X\n", 255);
    ft_puthex(255, 1);
	ft_putchar('\n');

    printf("%x\n", 0);
    ft_puthex(0, 0);

    printf("%x\n", (unsigned int)-1);
    ft_puthex((unsigned int)-1, 0);
	ft_putchar('\n');
} */