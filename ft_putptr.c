/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:06:42 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/16 17:46:57 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthex_ptr(unsigned long num, char c)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		count += puthex_ptr(num / 16, c);
	write (1, &base[num % 16], 1);
	count++;
	return (count);
}

int	ft_putptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + puthex_ptr((unsigned long)ptr, 0));
}
/* int main()
{
    int     n;
    void    *ptr;

    ptr = &n;
    printf("result: %p\n", ptr);
    ft_putptr(ptr);
	ft_putchar('\n');

    // null case
    printf("result: %p\n", NULL);
    ft_putptr(NULL);
	ft_putchar('\n');
} */