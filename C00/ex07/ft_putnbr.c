/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:43:12 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 10:37:14 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_2digits(int part, int *first_digit)
{
	if (*first_digit != 0)
	{
		ft_putchar(part / 10 + '0');
		ft_putchar(part % 10 + '0');
	}
	else
	{
		if (part / 10 > 0)
		{
			ft_putchar(part / 10 + '0');
			ft_putchar(part % 10 + '0');
			*first_digit = 1;
		}
		else if ((part % 10) > 0)
		{
			ft_putchar(part % 10 + '0');
			*first_digit = 1;
		}
	}
}

void	write_digits(int part, int overflow, int first_digit)
{
	int	remaining;

	remaining = part - (part / 10000) * 10000;
	if (first_digit != 0)
	{
		ft_putchar(part / 10000 + '0');
	}
	else
	{
		if (part / 10000 > 0)
		{
			ft_putchar(part / 10000 + '0');
			first_digit = 1;
		}	
	}	
	write_2digits(remaining / 100, &first_digit);
	write_2digits((remaining + overflow) % 100, &first_digit);
}

void	ft_putnbr(int nb)
/* overflow(2nd arg) to handle minus max value 
   first_digit(3rd arg) to check first digit to print succeed '0' */
{
	int	overflow;

	overflow = 0;
	if (nb != 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			if (nb == -2147483648)
			{
				nb = nb + 1;
				overflow = 1;
			}
			nb = -nb;
		}
		write_digits(nb / 100000, 0, 0);
		write_digits(nb % 100000, overflow, nb / 100000);
	}
	else
	{
		ft_putchar('0');
	}
}
