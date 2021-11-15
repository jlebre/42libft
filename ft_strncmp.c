/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:01:14 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 16:30:52 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		val1;
	int		val2;

	i = 0;
	val1 = 0;
	val2 = 0;
	while (i < n)
	{
		val1 += str1[i];
		val2 += str2[i];
		i++;
	}
	if (val1 > val2)
		return (1);
	else if (val1 < val2)
		return (-1);
	else
		return (0);
}
