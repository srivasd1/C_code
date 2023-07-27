/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:34:56 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/05 16:32:46 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
			if (str [i] < 32 || str [i] > 127)
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
    //char str[] = "Hello, \nWorld!";

	//str1 [0] = '\0';
	str1 [0] = 'A';
	str1 [1] = '\n';
	str1 [1] = 'B';
	str1 [1] = 'D';
	str1 [2] = 'C';
	str1 [3] = 'D';
	str1 [4] = '\0';
	ptr = str1;
	n = ft_str_is_printable(ptr);
	printf("%d\n", n);
	return (0);
}*/
