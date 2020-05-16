/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_add.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/16 00:29:36 by abobas        #+#    #+#                 */
/*   Updated: 2020/05/16 02:17:36 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	vector_add(t_vector *v, char *data)
{
	if (v->capacity == v->total)
		vector_resize(v, v->capacity * 2);
	v->data[v->total] = data;
	v->total++;
}
