/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 08:06:30 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/22 06:27:42 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	is_equal(char *src, char *to_compare)
{
	unsigned int	i;

	i = 0;
	while (to_compare[i] != '\0')
	{
		if (to_compare[i] != src[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *src, char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (src);
	}
	i = 0;
	while (src[i] != '\0')
	{	
		if (src[i] == to_find[0])
		{
			if (is_equal(&src[i], to_find))
			{
				return (&src[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "fd fd fd";
	char	str2[] = "fd";
	char	*result1;
	char	*result2;

	result1 = strstr(str1, str2);
	printf("%s\n", result1);
	result2 = ft_strstr(str1, str2);
	printf("%s\n", result2);
	return (0);
}*/
