/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:16:55 by jlebre            #+#    #+#             */
/*   Updated: 2021/12/07 16:26:03 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;

    if (!lst || !f)
        return (NULL);
    while (lst)
    {
        new_lst->content = f(lst->content);
        if (!new_lst->next)
            ft_lstclear(&new_lst, del);
        lst = lst->next;
        new_lst = new_lst->next;
    }
    return (new_lst);
}