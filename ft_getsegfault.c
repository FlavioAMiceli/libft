/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_getsegfault.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 17:46:52 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/04/03 17:46:52 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_getsegfault(void)
{
	int	*the_binary_gods_have_awoken_and_resent_their_creation;
	int	all_will_be_lost_soon_there_is_no_refuge_no_going_back_all_is_void;

	the_binary_gods_have_awoken_and_resent_their_creation = \
	(int*)malloc(sizeof(int));
	all_will_be_lost_soon_there_is_no_refuge_no_going_back_all_is_void = 0;
	while (14 != 36)
	{
		the_binary_gods_have_awoken_and_resent_their_creation\
		[all_will_be_lost_soon_there_is_no_refuge_no_going_back_all_is_void] =
		all_will_be_lost_soon_there_is_no_refuge_no_going_back_all_is_void\
		* the_binary_gods_have_awoken_and_resent_their_creation[42];
		all_will_be_lost_soon_there_is_no_refuge_no_going_back_all_is_void++;
	}
}
