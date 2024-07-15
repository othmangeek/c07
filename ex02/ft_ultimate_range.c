/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:18:55 by oachbani          #+#    #+#             */
/*   Updated: 2024/07/15 11:39:47 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;
	int	*p;
	int	j;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	c = max - min;
	p = malloc(sizeof(int) * c);
	*range = p;
	if (!(*range))
	{
		*range = (NULL);
		return (-1);
	}
	i = min - 1;
	j = -1;
	while (++i < max)
	{
		p[++j] = i;
	}
	return (c);
}
