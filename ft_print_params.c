/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:12:39 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/11 18:29:36 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char	**argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv [i][j] != '\0')
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
