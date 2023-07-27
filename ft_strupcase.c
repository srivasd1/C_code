/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:33:38 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/06 17:53:40 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			str[i] = str [i] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main (void)
{
	char	str [20] = "DIVya $ Srivastava";
	char *str1;

	str1 = ft_strupcase(str);
	printf("%s", str1);
	return (0);

}
