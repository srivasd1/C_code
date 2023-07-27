/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:38:13 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/05 17:48:21 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != 0)
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
		{
			str [i] = str [i] + 32;
		}
			i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main (void)
{
	char	str [20] = "DIVYA  Srivastava";
	char *str1;

	str1 = ft_strlowcase(str);
	printf("%s", str1);
	return (0);

}*/
