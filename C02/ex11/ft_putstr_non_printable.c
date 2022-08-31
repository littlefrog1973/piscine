/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:17:57 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/17 10:29:28 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char *str)
{
	if (!(*str >= ' ' && *str <= '~'))
	{
		return (0);
	}
	return (1);
}

void	ft_put_nonchar(char c)
{
	ft_putchar('\\');
	if (c < 0)
	{
		c = c + 256;
	}
	if (c / 16 < 10)
	{
		ft_putchar(c / 16 + '0');
	}
	else
	{
		ft_putchar(c / 16 + 'a' - 10);
	}
	if (c % 16 < 10)
	{
		ft_putchar(c % 16 + '0');
	}
	else
	{
		ft_putchar(c % 16 + 'a' - 10);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(&str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_put_nonchar(str[i]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	ft_putchar('\n');
}*/
