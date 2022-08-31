/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:44:36 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 10:32:53 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_two_digit(char two_digit)
{
	if (two_digit <= 99)
	{
		ft_putchar(two_digit / 10 + '0');
		ft_putchar(two_digit % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	char	front;
	char	back;

	front = 0;
	while (front <= 98)
	{
		back = 0;
		while (back <= 99)
		{	
			if (back > front)
			{
				write_two_digit(front);
				ft_putchar(' ');
				write_two_digit(back);
				if (front != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			back++;
		}
		front++;
	}
}
