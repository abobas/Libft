/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_resize.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/15 23:53:44 by abobas        #+#    #+#                 */
/*   Updated: 2020/05/16 02:17:10 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

void	vector_resize(t_vector *v, int capacity)
{
	char	**new;
	int		i;

	i = 0;
	new = (char**)malloc(sizeof(char*) * capacity);
	if (!new)
		return ;
	while (i < v->total)
	{
		new[i] = ft_strdup(v->data[i]);
		if (!new[i])
			return ;
		i++;
	}
	vector_free(v);
	v->data = new;
	v->capacity = capacity;
}
