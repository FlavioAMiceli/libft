/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 19:05:27 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/01/31 13:08:25 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				memcmp_unrolled(\
	const unsigned long **str1, const unsigned long **str2, size_t len)
{
	while (len / (sizeof(unsigned long) * 4) > 0)
	{
		if ((**str1) != (**str2))
			return (len);
		(*str1)++;
		(*str2)++;
		if ((**str1) != (**str2))
			return (len - sizeof(unsigned long));
		(*str1)++;
		(*str2)++;
		if ((**str1) != (**str2))
			return (len - (2 * sizeof(unsigned long)));
		(*str1)++;
		(*str2)++;
		if ((**str1) != (**str2))
			return (len - (3 * sizeof(unsigned long)));
		(*str1)++;
		(*str2)++;
		len -= 4 * sizeof(unsigned long);
	}
	return (len);
}

static unsigned long	memcmp_wordcmp(\
	const unsigned long **str1, const unsigned long **str2, size_t n)
{
	if (n >= sizeof(unsigned long) * 4)
		n = memcmp_unrolled(str1, str2, n);
	while (n / sizeof(unsigned long) > 0 && **str1 == **str2)
	{
		(*str1)++;
		(*str2)++;
		n -= sizeof(unsigned long);
	}
	return (n);
}

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	n--;
	if (n >= sizeof(unsigned long) * 4)
	{
		while (((unsigned long)str1 & (sizeof(unsigned long) - 1)) != 0)
		{
			if (*str1 != *str2)
				return (*str1 - *str2);
			str1++;
			str2++;
			n--;
		}
		n = memcmp_wordcmp(\
			(const unsigned long **)&str1, (const unsigned long **)&str2, n);
	}
	while (n > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
