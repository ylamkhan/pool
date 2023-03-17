/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 00:02:26 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/08/01 13:41:30 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	scrlen;
	unsigned int	i;	

	destlen = 0;
	scrlen = 0;
	i = 0;
	while (*(src + scrlen) != '\0')
		scrlen++;
	while (*(dest + destlen) != '\0')
		destlen++;
	if (!size || size <= destlen)
		return (size + scrlen);
	while (*(src + i) != '\0' && i < size - destlen - 1)
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + scrlen);
}
