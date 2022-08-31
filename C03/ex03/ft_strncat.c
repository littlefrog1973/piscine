/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 06:47:16 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/21 06:55:17 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[10] = "abc\0      ";
	char	str2[] = "1234";
	char	str3[10] = "def\0      ";

	strncat(str1, str2, 2);
	printf("%s\n", str1);
	ft_strncat(str3, str2, 2);
	printf("%s\n", str3);
	return (0);
}*/
