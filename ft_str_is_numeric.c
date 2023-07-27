/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:47:03 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/06 12:19:15 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
			if (str[i] < '0' || str [i] > '9')
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

//	str1 [0] = '\0';
	str1 [0] = '7';
	str1 [1] = '6';
	str1 [1] = '1';
	str1 [2] = '5';
	str1 [3] = '7';
	str1 [4] = '\0';
	ptr = str1;
	n = ft_str_is_numeric(str1);
	printf("%d\n", n);
	return (0);
}
*/
