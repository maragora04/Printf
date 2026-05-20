/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:03:06 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/20 18:00:29 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_specifier(*format, args);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
/* int main()
{
	ft_printf("%s\n", "=====MY TESTS=====");
	//char 
	char c = 'a';
	ft_printf("char test mine: %c\n", c);
	printf("char test og: %c\n", c);
	//string 
	char *s = "ola adeus";
	ft_printf("str test mine: %s\n", s);
	printf("str test og: %s\n", s);
	//number 
	int n = -4;
	ft_printf("num test mine: %d\n", n);
	printf("num test og: %d\n", n);
	//unsigned 
	unsigned int n1 = 42;
	ft_printf("unsigned num mine: %u\n", n1);
	printf("unsigned num og: %u\n", n1);
	//pointer
	void *ptr = NULL;
	ft_printf("pointer test mine: %p\n", ptr);
	printf("pointer test og: %p\n", ptr);
	//uppercase unsigned hex
	unsigned int n2 = 255;
	ft_printf("uppercase hex test mine: %X\n", n2);
	printf("uppercase uns int test og: %X\n", n2);
	//lowercase unsigned hex
	ft_printf("lowercase hex test mine: %x\n", n2);
	printf("og: %x\n", n2);
	//% sign
	ft_printf("sign test mine: %%\n");
	printf("sign test og: %%\n");
	ft_putchar('\n');

	ft_printf("%s\n", "ggwp");
} */