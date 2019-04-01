/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_slow_memcmp.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 20:30:06 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/04/01 20:30:07 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_slow_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	if (n == 0)
		return (0);
	while (n - 1 > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
