/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:18:11 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/17 12:11:40 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || (power == 0))
	{
		return (1);
	}
	while (i <= power)
	{
		x = x * nb;
		i++;
	}
	return (x);
}
/*
#include <stdio.h>

int main (void)
{
int n = 0;
int m = 2;
int s;

s= ft_iterative_power(n,m);
printf("%d\n", s);
return (0);
}*/
