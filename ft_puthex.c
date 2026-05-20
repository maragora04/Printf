/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:34:35 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/16 17:45:32 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char c)
{
	char	*base;
	int		count;

	count = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		count += ft_puthex(num / 16, c);
	write (1, &base[num % 16], 1);
	count++;
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