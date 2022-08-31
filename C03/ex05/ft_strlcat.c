/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 06:32:22 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/22 22:48:25 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_j;

	i = ft_strlen(dest);
	size_j = ft_strlen(src);
	j = 0;
	if (size - i >= 1)
	{
		while ((src[j] != '\0') && (j + 1 + i < size))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	if (size >= i)
	{
		return (i + size_j);
	}
	else
	{
		return (i + 1 + size);
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	str1[10] = "abc";
	char	str2[] = "1234";
	char	str3[10] = "def";
	unsigned int	i;

	i = strlcat(str1, str2, 10);
	printf("return = %u\n", i);
	write(1, str1, 10);
	write(1, "\n", 1);	
	i = ft_strlcat(str3, str2, 10);
	printf("return = %u\n", i);
	write(1, str3, 10);
	write(1, "\n", 1);	
	return (0);
}*/
