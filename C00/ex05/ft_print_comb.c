/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:37:08 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/07/21 20:58:20 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	l;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			l = s + 1;
			while (l <= '9')
			{
				write(1, &f, 1);
				write(1, &s, 1);
				write(1, &l, 1);
				if (f != '7')
					write(1, ", ", 2);
				l++;
			}
			s++;
		}
		f++;
	}
}
