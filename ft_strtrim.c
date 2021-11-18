/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:34:00 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/18 19:18:47 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

static int	check_set(const char *s, char k)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == k)
			return (k);
		a++;
	}
	return (!k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!set)
		return ((char *)s1);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] == check_set(set, s1[i]))
		i++;
	while (s1[j] == check_set(set, s1[j]))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i));
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
