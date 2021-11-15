/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:08:04 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/15 17:17:14 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (malloc(sizeof(char) * len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start)
		{
			while (((i - start) < len) && (i != '\0'))
			{
				str[j] = s[i];
				i++;
				j++;
			}
			return ((char *)str);
		}
		i++;
	}
	return (NULL);
}
