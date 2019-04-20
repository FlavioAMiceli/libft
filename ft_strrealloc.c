/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrealloc.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/20 17:18:39 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/04/20 17:18:40 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char *str, size_t size)
{
	char	*new_str;
	int		len;

	len = ft_strlen(str);
	new_str = ft_realloc(str, len + 1, size);
	ft_bzero(&new_str[len + 1], ft_max((int)size - (len + 1), 0));
	return (new_str);
}
