/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:12:24 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/01 02:16:13 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(to_find + j) == *(str + i + j))
		{
			if (*(to_find + j + 1) == '\0')
				return ((str + i));
			else
				j++;
		}
		i++;
	}
	return (0);
}
