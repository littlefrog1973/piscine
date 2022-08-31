/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:01:35 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 10:24:53 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = 1;
		while (ten < 99)
		{
			if (hundred < ten / 10 + '0' && ten / 10 < ten % 10)
			{
				ft_putchar(hundred);
				ft_putchar(ten / 10 + '0');
				ft_putchar(ten % 10 + '0');
				if (hundred != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			ten = ten + 1;
		}
		hundred = hundred + 1;
	}
}
