/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:43:59 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/14 09:29:59 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int long	i;
	int long	nb;
	int long	ng;
	int long	prev;

	i = 0;
	nb = 0;
	ng = 1;
	while (str[i] && (ft_isspace(str[i])))
		i++;
	if (str[i] == '-')
		ng = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		prev = nb;
		nb = 10 * nb + str[i++] - '0';
		if (nb < 0 && ng < 0)
			return (0);
		else if ((nb < 0 || prev > nb) && ng > 0)
			return (-1);
	}
	return (nb * ng);
}
