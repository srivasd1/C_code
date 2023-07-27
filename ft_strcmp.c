/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:06:10 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/06 12:44:49 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s [i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlencmp(int i, int j)
{
	if (i == j)
	{
		return (0);
	}
	else if (i > j)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	k;
	int	i;
	int	j;
	int	n;

	k = 0;
	i = ft_strlen (s1);
	j = ft_strlen (s2);
	while (k < i && k < j)
	{
		if (s1 [k] < s2 [k])
		{
			return (s1 [k] - s2 [k]);
		}
		if (s1 [k] > s2 [k])
		{
			return (s1 [k] - s2[k]);
		}
			k++;
	}
	n = ft_strlencmp(i, j);
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1 = "C strncmp js";
	char	*str2 = "C strncmp is";
	int		n;

	n = ft_strcmp(str1, str2);
	printf("%d\n", n);
}*/
