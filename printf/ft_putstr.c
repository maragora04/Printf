/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:32:19 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/15 18:03:36 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		return (ft_putstr("(null)"));
	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	return (len);
}
/* int main()
{
	ft_putstr("ola adeus bom dia\n");
	printf("%s\n", "ola adeus bom dia");
} */