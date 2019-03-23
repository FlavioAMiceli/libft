/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_delcontent.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 00:33:38 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/03/16 00:33:39 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delcontent(void *content, size_t size)
{
	free(content);
	(void)size;
}