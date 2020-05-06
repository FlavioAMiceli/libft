/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 09:16:00 by fmiceli        #+#    #+#                */
/*   Updated: 2020/05/06 09:16:31 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstrev(t_list *lst)
{
    t_list *curr;
    t_list *head;

    curr = lst;
    head = curr;
    lst = lst->next;
    while (lst)
    {
        curr->next = lst;
        lst = lst->next;
    }
    return (head);
}
