/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:06:27 by jlebre            #+#    #+#             */
/*   Updated: 2021/11/24 15:06:28 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *ptr;

    ptr = malloc(sizeof(t_list));
    if (!ptr)
        return (NULL);
    ptr->content = content;
    ptr->next = NULL;
    return (ptr);
}