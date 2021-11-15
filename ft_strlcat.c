/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:43:14 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 16:22:33 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, int size)
{
	int		size_dest;
	int		size_src;
	int		i;
	int		j;

	size_dest = 8;
	size_src = 25;
	j = size_dest;
	i = 0;
	if ((size_dest < (size - 1)) && (size > 0))
	{
		while ((src[i] != '\0') && ((size_dest + i) < (size - 1)))
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (size_dest >= size)
		size_dest = size;
	return (size_dest + size_src);
}
