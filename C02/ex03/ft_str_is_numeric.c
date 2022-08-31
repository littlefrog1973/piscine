/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:39:05 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/12 08:30:19 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	str[] = "0123456789";
	char	str2[] = "a";
	char	str3[] = "";

	ft_putchar(ft_str_is_numeric(str) + '0');
	ft_putchar(ft_str_is_numeric(str2) + '0');
	ft_putchar(ft_str_is_numeric(str3) + '0');
}*/
