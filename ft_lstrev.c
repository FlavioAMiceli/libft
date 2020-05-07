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

t_list *ft_lstrev(t_list **alst)
{
    t_list *curr;

    if (!alst || !(*alst))
        return (NULL);
    curr = ft_lstdequeue(alst);
    curr->next = NULL;
    while (alst)
        ft_lstadd(&curr, ft_lstdequeue(alst));
    return (curr);
}
