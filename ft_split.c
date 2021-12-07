/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:14:27 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/24 15:28:23 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	words;
	int	counter;
	int	i;

	words = 0;
	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	if (s[0] == c && s[i - 1] == c)
		words = (counter - 1);
	else if (s[i - 1] == c || s[0] == c)
		words = counter;
	else
		words = (counter + 1);
	return (words);
}

char **ft_split(char const *s, char c)
{
    int    i;
    int    j;
    int    k;
    unsigned char    **arr;

    i = 0;
    k = 0; 
    if (!s)
        return (NULL);
	arr = malloc(sizeof(char *) * (count(s, c)));
    if (!*arr)
            return (NULL);
    while (s[i])
    {
        j = i;
        while (s[i] != c)
            i++;
        while (s[j] != c)
        {
            arr[k][j] = s[j];
            j++;
        }
        arr[k][j] = '\0';
        k++;
    }
    free(arr);
    return ((char **)arr);
}