/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:02:17 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/07/31 20:11:30 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int nb)
{
	char	*hex;
	int		d;

	hex = "0123456789abcdef";
	d = 0;
	if (nb < 0)
		return ;
	if (nb >= 16)
	{
		d = nb / 16;
		ft_puthex(d);
		nb = nb % 16;
	}
	else
	{
		write(1, &hex[d], 1);
		write(1, &hex[nb], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_puthex(j);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
