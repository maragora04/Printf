/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:32:19 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/20 18:00:55 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		i;
	size_t	len;

	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	len = ft_strlen(s);
	while (s[i] && len > 0)
	{
		write(1, &s[i], 1);
		i++;
		len++;
	}
	return (i);
}
/* int main()
{
	ft_putstr("ola adeus bom dia\n");
	printf("%s\n", "ola adeus bom dia");
} */