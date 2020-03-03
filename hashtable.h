/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashtable.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <fmiceli@student.codam.nl...>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/03 21:33:05 by fmiceli       #+#    #+#                 */
/*   Updated: 2020/03/03 21:33:06 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHTABLE_H

# define HASHTABLE_H

# include "libft.h"

# define PERTURB_SHIFT 5

typedef struct		s_dict
{
	int				*keys;
	void			*values;
	int				dict_len;
}					t_dict;

t_dict	*dict_new(int n);
void 	dict_del(t_dict *dict, void (*del)(void *));

void	dict_set(t_dict *dict, char *key, void *value);
void 	*dict_get(t_dict *dict, char *key);

int		ft_hash(char *key, int dict_len);
int		ft_probe(t_dict *dict, char *key, int hash);

#endif
