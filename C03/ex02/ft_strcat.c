/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:32:57 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/21 06:44:25 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
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

	strcat(str1, str2);
	printf("%s\n", str1);
	ft_strcat(str3, str2);
	printf("%s\n", str3);
	return (0);
}*/
