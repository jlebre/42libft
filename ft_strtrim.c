/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:34:00 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/16 17:03:12 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] == (char)set)
		i++;
	while (s1[j] == (char)set)
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
