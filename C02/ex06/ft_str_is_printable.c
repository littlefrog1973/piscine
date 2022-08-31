/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:12:20 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/12 09:55:22 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	str[] = " !abcdefghijklmnopqrstuvwxyz{}~";
	char	str2[] = "abcdA1\t";
	char	str3[] = "";

	ft_putchar(ft_str_is_printable(str) + '0');
	ft_putchar(ft_str_is_printable(str2) + '0');
	ft_putchar(ft_str_is_printable(str3) + '0');
}*/
