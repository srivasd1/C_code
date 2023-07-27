/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:21 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/16 17:52:04 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n = (max - min);
	arr = (int *) malloc(n * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < n)
	{
		*(arr + i) = (min + i);
		i++;
	}
	*range = arr;
	return (n);
}
/*
#include<stdio.h>
int main ()
{
	int size;
	int *r;
	int i;

	i = 0;
	size = ft_ultimate_range(&r, 20, 30);
		printf("size of range: %d\n", size);
		while (i < size)
		{
			printf("%d\n",*(r + i));
			i++;
		}
	free (r);
	return (0);
}*/
