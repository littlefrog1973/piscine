/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:03:48 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/12 08:19:44 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	is_not_null;

	i = 0;
	is_not_null = 1;
	while (i < n)
	{
		if (src[i] != '\0' && is_not_null)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			is_not_null = 0;
		}
		i++;
	}
	return (dest);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	src[11] = "0123456789";
	char	dest[20]= "abcdefghij";
	char	dest2[20]= "abcdefghij";
	unsigned int	n;
	unsigned int	i;

	n = 15;
	strncpy(dest, src, n);
	for (i = 0; i < 20; i++) ft_putchar(dest[i]);
	ft_putchar('\n');
	ft_strncpy(dest2, src, n);
	for (i = 0; i < 20; i++) ft_putchar(dest2[i]);
	ft_putchar('\n');
	return (0);
}*/
