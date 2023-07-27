/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:24:13 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/17 12:12:06 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || (power == 0))
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 2;
	int m;
	
	m = ft_recursive_power(i, j);
	printf("%d\n", m);
	return (0);
}*/
