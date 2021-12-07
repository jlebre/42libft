/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:57:16 by jlebre            #+#    #+#             */
/*   Updated: 2021/12/02 16:59:35 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *arr;

    if (!s || !f)
        return (0);
    i = 0;
    arr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!arr)
        return (NULL);
    while (s[i])
    {
        arr[i] = f(i, s[i]);
        i++;
    }
    arr[i] = '\0';
    return (arr);
}