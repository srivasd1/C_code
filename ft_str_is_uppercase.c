/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:08:19 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/05 15:39:14 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str [0] == '\0')
	{
		return (1);
	}
	else
	{
		while (str [i] != '\0')
		{
			if (str [i] < 'A' || str [i] > 'Z')
			{
				return (0);
			}
				i++;
		}
		return (1);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1 [10];
	char	*ptr;
	int		n;
    char str[] = ""; 

	//str1 [0] = '\0';
	str1 [0] = 'K';
	str1 [1] = 'B';
	str1 [1] = 'B';
	str1 [1] = 'D';
	str1 [2] = 'C';
	str1 [3] = 'D';
	str1 [4] = '\0';
	ptr = str;
	n = ft_str_is_uppercase(ptr);
	printf("%d\n", n);
	return (0);
}*/
