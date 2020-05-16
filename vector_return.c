/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_return.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/16 17:43:38 by abobas        #+#    #+#                 */
/*   Updated: 2020/05/16 17:47:36 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*vector_return(t_vector *v, char *reference)
{
	return (vector_get(v, vector_search(v, reference, ft_strlen(reference))));
}
