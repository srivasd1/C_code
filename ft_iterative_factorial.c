/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:11:33 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/12 11:37:03 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		x = x * nb;
		nb--;
	}
	return (x);
}
/*
#include <stdio.h>
int main (void)
{
	int nb;
	int m;

	nb = 1; // max intgervalue it can take 12; 
	m = ft_iterative_factorial(nb);
	printf("%d\n", m);
	return (0);
}*/
