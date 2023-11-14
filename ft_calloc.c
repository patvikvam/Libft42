/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:48:39 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/14 09:17:42 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	max_size;

	max_size = 4611686014132420608;
	if (count != 0 && size != 0 && max_size / count < size)
		return ((void *)0);
	p = (void *)malloc(count * size * sizeof(void));
	if (!p)
		return ((void *)0);
	ft_bzero(p, count * size);
	return (p);
}
