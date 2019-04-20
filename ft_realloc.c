/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/20 17:01:45 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/04/20 17:01:46 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *mem, size_t old_size, size_t size)
{
	char	*new_mem;

	new_mem = (char *)malloc(sizeof(char) * size);
	if (new_mem == NULL)
		return (NULL);
	old_size = ft_min(old_size, size);
	new_mem = ft_memcpy(new_mem, mem, old_size);
	free(mem);
	return (new_mem);
}
