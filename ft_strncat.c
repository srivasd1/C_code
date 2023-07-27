/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:19:37 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/10 10:59:13 by dsrivast         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				l_dest;
	unsigned int	n;

	n = 0;
	l_dest = ft_strlen(dest);
	while ((src [n] != '\0') && n < nb)
	{
		dest [l_dest] = src [n];
		l_dest++;
		n++;
	}
	dest [l_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

#define SIZE 40

int main(void)
{
  char buffer1[SIZE] = "computer";
  char * ptr;

  // Call strncat with buffer1 and " program" 
  ptr = strncat( buffer1, " ", 3 );
  printf( "strncat: buffer1 = \"%s\"\n", buffer1 );
}*/
