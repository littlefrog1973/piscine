/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:22:34 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/23 08:34:11 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "abcdefghij";
	
	printf("%lu\n", strlen(str));
	printf("%d\n", ft_strlen(str));
}*/
