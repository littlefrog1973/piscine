/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:37:13 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/12 08:25:40 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_lower;
	int	is_upper;

	i = 0;
	while (str[i] != '\0')
	{
		is_lower = 0;
		is_upper = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			is_lower = 1;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			is_upper = 1;
		}
		if (!(is_lower || is_upper))
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
	char	str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0";

	ft_putchar(ft_str_is_alpha(str)+'0');
}*/
