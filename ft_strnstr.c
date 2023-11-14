/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:12:58 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/14 09:16:09 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(find))
		return ((char *)str);
	i = -1;
	while (++i < len && *(str + i))
	{
		j = -1;
		while ((i + ++j) < len && *(str + i + j) == *(find + j))
			if (!*(find + j + 1))
				return ((char *)(str + i));
	}
	return (NULL);
}
