/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:54:26 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/10 23:49:38 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*p;

	j = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	p = (int *)malloc(i * sizeof(int));
	if (!p)
	{
		*range = 0;
		return (-1);
	}
	*range = p;
	while (j < i)
	{
		*(p + j) = min + j;
		j++;
	}	
	return (i);
}
/*
int main()
{
	int *p;
	int i ;
	int size;
	i = 0;
	size = ft_ultimate_range(&p,1,9);
	while (i < size  + 1)
	{
		printf("%d\n", p[i]);
		i++;
	}
}
*/
