/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:06:18 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/08 15:55:35 by dsrivast         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	l_s1;
	int	n;

	n = 0;
	l_s1 = ft_strlen(dest);
	while (src [n] != '\0')
	{
		dest [l_s1] = src [n];
		l_s1++;
		n++;
	}
	dest [l_s1] = '\0';
	return (dest);
}
/*
#include <stdio.h>
 
#define SIZE 40
 
 
int main(void)
{
  char buffer1[40] = "computer";
  char * ptr;
 
  ptr = ft_strcat( buffer1, "program" );
  printf( "buffer1 = %s\n", buffer1 );
 
}*/
