/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:30:31 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/11 08:49:55 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include    <stdlib.h>
#include	"ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!p)
		return (0);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	while (i < ac)
	{
		array[i].str = av[i];
		array[i].size = ft_strlen(av[i]);
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
