/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:36:25 by oachbani          #+#    #+#             */
/*   Updated: 2024/07/14 16:12:53 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	s;
	int	i;
	int	j;
	int	*p;

	if (min >= max)
		return (NULL);
	s = max - min;
	p = malloc(s * sizeof(int));
	if (!p)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		p[j] = i;
		i++;
		j++;
	}
	return (p);
}
