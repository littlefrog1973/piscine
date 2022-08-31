/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 07:10:40 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 10:43:57 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	power_ten(int n)
{
	int	i;
	int	dummy;

	dummy = 1;
	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			dummy = dummy * 10;
			i++;
		}
	}
	return (dummy);
}

int	slice(int number, int position)
{
	int	dummy1;
	int	dummy2;

	if (position > 1)
	{
		dummy1 = number % power_ten(position);
		dummy2 = number % power_ten(position - 1);
		return ((dummy1 - dummy2) / power_ten(position - 1));
	}
	else if (position == 1)
	{	
		return (number % 10);
	}
	else
	{
		return (-1);
	}
}

int	is_comb(int number, int n)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (i < n && result)
	{
		if (slice(number, i + 1) >= slice(number, i))
		{	
		result = 0;
		}
		i++;
	}
	return (result);
}

void	ft_print_combn(int n)
{
	int	i;
	int	nn;
	int	max;

	i = power_ten(n);
	max = 2 * i - (n - 1) * power_ten(n - 1);
	while (i < max)
	{
		if (is_comb(i, n))
		{
			nn = n;
			while (nn > 0)
			{
				ft_putchar(slice(i, nn) + '0');
				nn--;
			}
			if (slice(i, n) != (10 - n))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
