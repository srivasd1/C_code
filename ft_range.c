/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:33:43 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/14 10:44:14 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int		n;
	int		i;
	int		*ptr;

	i = 0;
	n = max - min;
	if (min >= max)
		return (NULL);
	ptr = (int *) malloc(n * sizeof(int));
	if (ptr == NULL)
		return (0);
	while (i <= n)
	{
		ptr [i] = min + i;
		i++;
	}
	return (ptr);
}
/*
#include<stdio.h>

int main (void)
{
	int *m;
	int i;
	int min;
	int max;

	min = 30;
	max = 50;
	i = 0;
	m = ft_range(min, max);
	while (i < (max - min))
	{
	    printf("%d\n", *(m+i));
	    i++;
	}
	free (m);
	return (0);
}*/
