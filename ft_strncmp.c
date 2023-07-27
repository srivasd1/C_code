/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:34:17 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/10 12:41:17 by dsrivast         ###   ########.fr       */
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

int	ft_strlencmp(unsigned int i, unsigned int j)
{	
	if (i == j)
	{
		return (0);
	}
	else if (i > j)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	k = 0;
	i = ft_strlen (s1);
	j = ft_strlen (s2);
	while (k < n && k < i && k < j)
	{
		if (s1 [k] < s2 [k])
		{
			return (s1 [k] - s2 [k]);
		}
		if (s1 [k] > s2 [k])
		{
			return (s1 [k] - s2 [k]);
		}
			k++;
	}
	if (k == n)
	{
		return (0);
	}
	return (ft_strlencmp(i, j));
}
/*
#include <stdio.h>
#define SIZE 10

int ind = 3;
int main(void)
{
  int  result;
  char buffer1[SIZE] = "8655";
  char buffer2[SIZE] = "56550";
  void print_result( int, char *, char * );


  result = ft_strncmp( buffer1, buffer2, ind);
  printf( "\nstrncmp: compares only the first %i characters\n", ind );
  print_result( result, buffer1, buffer2 );
  printf("%d", result);
}

void print_result( int res, char * p_buffer1, char * p_buffer2 )
{
  if ( res == 0 )
    printf( "first %i characters of \"%s\" is identical to \"%s\"\n",
             ind,  p_buffer1, p_buffer2);
  else if ( res < 0 )
    printf( "\"%s\" is less than \"%s\"\n", p_buffer1, p_buffer2 );
  else
    printf( "\"%s\" is greater than \"%s\"\n", p_buffer1, p_buffer2 );
}*/
