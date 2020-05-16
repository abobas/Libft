/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_print.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/16 01:09:09 by abobas        #+#    #+#                 */
/*   Updated: 2020/05/16 02:17:01 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	vector_print(t_vector *v)
{
	int		i;

	i = 0;
	while (i < v->total)
	{
		ft_printf("data[%d] = \"%s\"\n", i, v->data[i]);
		i++;
	}
}
