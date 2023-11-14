/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:22:15 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/02 15:04:57 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		dlen;
	size_t		space;

	d = dst;
	s = src;
	dlen = 0;
	space = size;
	while (space > 0 && *d != '\0')
	{
		d++;
		dlen++;
		space--;
	}
	if (space == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0' && space-- > 1)
	{
		*d++ = *s++;
	}
	*d = '\0';
	return (dlen + ft_strlen(src));
}
