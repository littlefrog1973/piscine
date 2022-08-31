/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:35:02 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/25 13:21:32 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_put_digit(char *base, int digit)
{
	if (digit < 0)
	{
		digit = -digit;
	}
	write(1, &base[digit], 1);
}

long int	x_power_y(int x, int y)
{
	long int	result;

	result = 1;
	while (y > 0)
	{
		result = result * x;
		y--;
	}
	return (result);
}

int	check_base_digits(char *base, int *n_digits)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0' || base[i] == '+' || base[i] == '-' )
		{
			if (base[i] == '+' || base[i] == '-' || base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	*n_digits = 0;
	while (x_power_y(i, *n_digits) - 1 <= 2147483647)
	{
		*n_digits = *n_digits + 1;
	}
	return (i);
}

int	write_digits(char *base, int *result, int n_digits, int nbr)
{
	int		i;
	char	first_digit;

	if (nbr == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	i = 0;
	first_digit = 0;
	while (i < n_digits)
	{
		if (result[i] != 0)
		{
			ft_put_digit(base, result[i]);
			first_digit = 1;
		}
		else if (result[i] == 0 && first_digit)
		{
			ft_put_digit(base, result[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	n_digits;
	int	result[32];
	int	remain;
	int	n_base;

	n_base = check_base_digits(base, &n_digits);
	if (nbr < 0 && n_base > 1)
	{
		write(1, "-", 1);
	}
		remain = nbr;
	if (n_base > 1)
	{
		i = 0;
		while (i < n_digits)
		{
			result[i] = remain / x_power_y(n_base, n_digits - i - 1);
			remain = remain - result[i] * x_power_y(n_base, n_digits - i - 1);
			i++;
		}
		i = write_digits(base, result, n_digits, nbr);
	}
}
/*
int	main(void)
{
	char	base16[] = "0123456789ABCDEF";

	ft_putnbr_base(2147483647, base16);
	return (0);
}*/
