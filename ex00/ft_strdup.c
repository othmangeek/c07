/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:18:32 by oachbani          #+#    #+#             */
/*   Updated: 2024/07/14 11:34:43 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		s;

	s = 0;
	i = ft_strlen(src);
	p = (char *)malloc (i + 1);
	if (!p)
		return (0);
	if (i == 0)
	{
		p[0] = '\0';
		return (p);
	}
	while (src[s])
	{
		p[s] = src[s];
		i++;
	}
	p[s] = '\0';
	return (p);
}
