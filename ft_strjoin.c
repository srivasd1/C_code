/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrivast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:23:59 by dsrivast          #+#    #+#             */
/*   Updated: 2023/07/17 15:39:27 by dsrivast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str [len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char	*str1, char	*str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return (str2);
}

int	ft_arrlen(int size, char **strs, char	*sep)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
		total_length = total_length + ft_strlen(strs [i++]);
	total_length = total_length +((size - 1) * (ft_strlen(sep) + 1));
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		l;

	i = 0;
	if (size == 0)
	{
		ptr = malloc (1 * sizeof (char));
		ptr [0] = '\0';
		return (ptr);
	}
	l = ft_arrlen(size, strs, sep);
	ptr = malloc((l + 1) * sizeof(char));
	ptr [0] = '\0';
	while (i < size)
	{
		ft_strcat(ptr, strs [i]);
		if (i < (size - 1))
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

int main(void)
{
	char *sstr[] = {"Live", "learn", "understand", "explain!"};
	char *sep = "&";
	char *result = ft_strjoin(0, sstr, sep);
	printf("%s", result);
	free(result);
	return (0);
}
