/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lsttoarray.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 00:22:57 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/03/16 00:22:58 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lsttoarray(t_list **alst, int len)
{
	t_list	*current;
	int		i;
	size_t	j;
	int		*arr;

	arr = (int *)malloc(sizeof(int) * len);
	current = *alst;
	i = 0;
	while (current)
	{
		j = 0;
		while (j < current->content_size)
		{
			arr[i + j] = ((int *)(current->content))[j];
			j++;
		}
		current = current->next;
	}
	ft_lstdel(alst, ft_delcontent);
	return ((void *)arr);
}
