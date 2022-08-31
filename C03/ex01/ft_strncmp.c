/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:38:18 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/19 09:14:17 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	k;
	char			cmp;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && k <= i)
	{
		cmp = s1[k] - s2[k];
		if (s1[k] - s2[k])
		{
			return (cmp);
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
	char	str1[] = "ab\200e";
	char	str2[] = "abce";
	int	cmp1;
	int	cmp2;

	cmp1 = strncmp(str1, str2, 3);
	printf("%d\n", cmp1);
	cmp2 = ft_strncmp(str1, str2, 3);
	printf("%d", cmp2);
	return (0);
}*/
