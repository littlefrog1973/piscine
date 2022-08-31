/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:31:19 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/12 09:03:45 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[] = "abcdA1";
	char	str3[] = "";

	ft_putchar(ft_str_is_lowercase(str) + '0');
	ft_putchar(ft_str_is_lowercase(str2) + '0');
	ft_putchar(ft_str_is_lowercase(str3) + '0');
}*/	
