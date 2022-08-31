/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 06:19:44 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/15 08:40:33 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>
//#include <stdio.h>
unsigned int	size_src(char *src)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = size_src(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{	
			if (i < j)
			{
				dest[i] = src[i];
			}
			else if (i == j && dest[i] != '\0')
			{
				dest[i] = '\0';
				return (j);
			}
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}	
/*	
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	src[] = "0123456789";
	char	dest[] = "abcdefghijk";
	char	dest2[] = "abcdefghijk";
	unsigned int	n;
	unsigned int	i;

	n = 10;
	for (i = 0; i < 12; i++) ft_putchar(dest[i]);
	ft_putchar('\n');
	printf("%lu\n",strlcpy(dest, src, n));
	for (i = 0; i < 12; i++) ft_putchar(dest[i]);
	ft_putchar('\n');
	printf("%u\n",ft_strlcpy(dest2, src, n));
	for (i = 0; i < 12; i++) ft_putchar(dest2[i]);
	ft_putchar('\n');
	return (0);
}*/
