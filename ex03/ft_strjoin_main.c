/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:40:25 by oachbani          #+#    #+#             */
/*   Updated: 2024/07/15 18:35:19 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char **str, char *sep, int size)
{
	int	i;
	int j;
	int	len;
	int lens;

	i = -1;
	len = 0;
	while(str[++i])
	{
		j = -1;
		while(str[i][++j])
		{
			len++;
		}
	}
	lens = 0;
	while(sep[lens])
		lens++;
	len = len + ( lens * (size - 1));
	return(len);
}
void	ft_copy(char **str, char *sep , char *p, int size)
{
	int	i;
	int	j;
	int x;
	int	s;

	i = -1;
	x = 0;
	while(str[++i])
	{
		j = -1;
		while(str[i][++j])
		{
			p[x] = str[i][j];
			x++;
		}
	if (i < size - 1)
	{
		s = -1;
		while (sep[++s])
		{
			p[x] = sep[s];
			x++;
		}
	}
	}
	p[x] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;

	if (size == 0)
	{
		p = (char *)malloc(1);
		if(p)
			p[0] = '\0';
		return (p);
	}
	p = (char *)malloc(ft_len(strs, sep, size) + 1);
	if(!p)
		return(NULL);
	ft_copy(strs, sep, p,size);
	return (p);
}
#include<stdio.h>
int main(void)
{
    char **strs;
    char *separator;
    char *result;
    int size;

    size = 3;
    strs[0] =  "Hello";
    strs[1] =  "friend,";
    strs[2] =  "you are awesome";

    separator = " waa ";
    result = ft_strjoin(size, strs, separator);
        printf("%s\n", result);

    return 0;
}
