/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:40:02 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/07/26 20:51:11 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_swap(int	*a,	int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}