/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:10:35 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/15 16:54:59 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *s)
{
	int	j;

	j = 0;
	while (s [j] != '\0')
	{
		j++;
	}
	return (j + 1);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(ft_strlen(src));
	while (src [i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr [i] = '\0';
	return (ptr);
}
/*
#include<unistd.h>
#include<stdio.h>
int main (void)
{
	char	source [] = "Hive Hive";
	char	*target;
	target = ft_strdup(source);
	printf("%d\n", ft_strlen(source));
	write(1, target, ft_strlen(target));
	free(target);
	return 0;
}*/
