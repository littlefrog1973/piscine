/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:55:41 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/19 09:09:05 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		k;
	char	c;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k <= i)
	{
		c = s1[k] - s2[k];
		if (s1[k] - s2[k])
		{
			return (c);
		}
		k++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abc";
	int		cmp1;
	int		cmp2;

	cmp1 = strcmp(str1, str2);
	printf("%d\n", cmp1);
	cmp2 = ft_strcmp(str1, str2);
	printf("%d", cmp2);
	return (0);
}*/
