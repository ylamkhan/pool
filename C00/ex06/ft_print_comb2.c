/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:59:24 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/07/21 21:37:29 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a1;
	int	a2;

	a1 = -1;
	while (a1++ < 98)
	{
		a2 = a1;
		while (a2++ < 99)
		{
			ft_putchar((a1 / 10) + '0');
			ft_putchar((a1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((a2 / 10) + '0');
			ft_putchar((a2 % 10) + '0');
			if (a1 != 98)
				write(1, ", ", 2);
		}
	}
}
