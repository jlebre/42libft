/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:06:35 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 15:07:48 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	while (size != 0)
	{
		if (s[size] == (char)c)
			return ((char *)(s + size));
		size--;
	}
	return (NULL);
}
