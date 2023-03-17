/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 01:26:21 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/11 18:44:10 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(char **str, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(str[i]);
		i++;
	}
	return (j);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		k;
	int		j;

	j = -1;
	i = 0;
	k = ft_strslen(strs, size) + ft_strlen(sep) * (size - 1);
	if (size == 0)
		return (malloc(sizeof(char)));
	str = (char *)malloc(k * sizeof(char) + 1);
	while (++j < size)
	{
		ft_strcpy(str, strs[i]);
		str += ft_strlen(strs[i]);
		if (j + 1 < size)
		{
			ft_strcpy(str, sep);
			str += ft_strlen(sep);
		}
		i++;
	}
	str -= k;
	return (str);
}
