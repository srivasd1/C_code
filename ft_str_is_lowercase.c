/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:43:19 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/05 15:07:25 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		while (str [i] != '\0')
		{
			if (str [i] < 'a' || str [i] > 'z')
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
	str1 [0] = 'a';
	str1 [1] = 'b';
	str1 [1] = '$';
	str1 [2] = 'd';
	str1 [3] = 'e';
	str1 [4] = '\0';
	ptr = str1;
	n = ft_str_is_lowercase(str1);
	printf("%d\n", n);
	return (0);
}
*/
