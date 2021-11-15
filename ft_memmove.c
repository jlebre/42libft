/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:32:11 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 14:33:59 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int	i;

	i = 0;
	if ((str1 == NULL) && (str2 == NULL))
		return (NULL);
	while (i < n)
		*(unsigned char *)(str1 + i++) = *(unsigned char *)(str2++);
	return (str1);
}
