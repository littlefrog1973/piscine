/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:05:46 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/12 09:11:11 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str2[] = "abcdA1";
	char	str3[] = "";

	ft_putchar(ft_str_is_uppercase(str) + '0');
	ft_putchar(ft_str_is_uppercase(str2) + '0');
	ft_putchar(ft_str_is_uppercase(str3) + '0');
}*/	
