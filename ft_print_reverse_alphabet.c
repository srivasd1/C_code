/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabeet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:40:21 by dsrivast          #+#    #+#             */
/*   Updated: 2023/06/29 19:07:47 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	str ;

	str = 'z' ;
	while (str >= 'a')
	{
		write(1, &str, 1);
		str--;
	}
}
