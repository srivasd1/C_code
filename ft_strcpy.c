/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:02:14 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/04 18:11:49 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src [i])
	{
		dest [i] = src [i];
			i++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	d [] = "destination";
	char	s [] = "source";
	char	*p;

	p = ft_strcpy(d, s);
	printf("%s", p);
	return (0);
}
*/
