/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:24:57 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 14:27:29 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
