/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:33:42 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/20 17:59:47 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(char spec, va_list args)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (spec == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (spec == 'd' || spec == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (spec == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (spec == 'x' || spec == 'X')
		count += ft_puthex(va_arg(args, unsigned int), spec);
	else if (spec == 'p')
		count += (ft_putptr(va_arg(args, void *)));
	else if (spec == '%')
		count += ft_putchar('%');
	return (count);
}
