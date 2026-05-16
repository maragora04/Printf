/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:32:19 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/16 17:49:59 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;
	int i;

	if (!s)
		return (ft_putstr("(null)"));
	len = 0;
	i = 0;
	while (s[len])
		len++;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
		len++;
	}
	return (len);
}
/* int main()
{
	ft_putstr("ola adeus bom dia\n");
	printf("%s\n", "ola adeus bom dia");
} */