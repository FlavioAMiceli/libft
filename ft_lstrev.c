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

    if (!lst)
        return (NULL);
    curr = ft_lstdequeue(lst);
    curr->next = NULL;
    while (lst)
        ft_lstadd(&curr, ft_lstdequeue(lst));
    return (curr);
}
