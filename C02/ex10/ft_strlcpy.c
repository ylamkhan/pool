/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 05:33:44 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/07/31 15:59:10 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(str + j) != '\0')
	{
		j++;
	}
	if (size == 0)
		return (j);
	while (*(str + i) != '\0' && i < size - 1)
	{
		*(dest + i) = *(str + i);
		i++;
	}
	dest[i] = '\0';
	return (j);
}
