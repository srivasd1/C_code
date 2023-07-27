/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:27:50 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/11 10:45:56 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src [i])
	{
		dest [i] = src [i];
			i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
			i++;
	}
	return (dest);
}


#include <stdio.h>
int	main(void)
{
	char	d [50] = "Destination";
	char	s [20] = "Source";
	int		n;
	char	*p;

	n = 3;

	printf("Before strncpy destination is %s\n", d);
	p = ft_strncpy(d,s, n);
	printf("After strncpy destination becomes :%s\n",p );
	return (0);
}

