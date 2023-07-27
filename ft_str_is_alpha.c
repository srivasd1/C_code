/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:20:59 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/06 12:28:05 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			if ((str [i] < 'a' || str [i] > 'z') && \
					(str[i] < 'A' || str [i] > 'Z') \
					&& (str [0] != '\0'))
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
	char	ptr [6];
	int		n;
	char	*str1;

	ptr [0] = '\0';
//	ptr [1] = '\0';
//	ptr [2] = 'C';
//	ptr [3] = 'D';
//	ptr [4] = '\0';
	str1 = ptr;
	n = ft_str_is_alpha(str1);
	printf("%d\n", n);
	return (0);
}*/
