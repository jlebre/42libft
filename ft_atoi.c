/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:00:41 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 16:31:07 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	val;
	int	sinal;

	i = 0;
	sinal = 1;
	while ((str[i] == '\n') || (str[i] == '\r') || (str[i] == '\t')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == ' '))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	if ((str[i] >= 48) && (str[i] <= 57))
		val = (str[i] - '0');
	i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		val = ((val * 10) + (str[i] - '0'));
		i++;
	}
	return (sinal * val);
}
