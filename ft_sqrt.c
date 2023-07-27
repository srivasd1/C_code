/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:45:57 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/14 10:53:56 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	guess;
	long	n;

	guess = 2;
	n = nb;
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n >= 2)
	{
		while (guess * guess <= n)
		{
			if (guess * guess == n)
			{
				return (guess);
			}
			guess++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	int n;
	n = ft_sqrt(1406475009);
	printf("%d\n",n);
	return (0);

}*/
