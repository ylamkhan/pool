/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:10:59 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/10 23:45:16 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;
	int	j;

	i = max - min;
	j = 0;
	if (min >= max)
		return (0);
	t = (int *)malloc(i * sizeof(int));
	if (!t)
		return (0);
	while (j < i)
	{
		t[j] = min + j;
		j++;
	}
	return (t);
}
/*
int main()
{
	int *t;
	t = ft_range(2,6);
	int i = 0;
	while (i <= 5)
	{
		printf("%d\n",t[i]);
		i++;
	}		
}
*/
