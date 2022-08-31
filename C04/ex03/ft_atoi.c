/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:14:54 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/25 13:59:58 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_positive(char c)
{
	if (c == '-')
	{
		return (-1);
	}
	if (c == '+' || c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	if (c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	power_ten(int i)
{
	int	result;

	result = 1;
	while (i > 0)
	{
		result = result * 10;
		i--;
	}
	return (result);
}

int	read_digit(char *digits)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	while (digits[i] >= '0' && digits[i] <= '9')
	{
		i++;
	}
	result = 0;
	i--;
	j = 0;
	while (i >= 0)
	{
		result = result + (digits[i] - '0') * power_ten(j);
		j++;
		i--;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0')
	{
		sign = sign * is_positive(str[i]);
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = read_digit(&str[i]);
			break ;
		}
		i++;
	}
	result = result * sign;
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "+-+32ba";
	int		result;

	result = atoi(str);
	printf("%d\n", result);
	result = ft_atoi(str);
	printf("%d\n", result);
}*/
