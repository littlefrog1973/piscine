/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:59:00 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/17 10:55:02 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void	putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{	
	char	src[] = "01234";
	char	des[] = "abcdefg";
	char	des2[] = "abcdefg";
	char	*c;
	char	*c2;
	int	i;

	c = strcpy(des, src);
	for (i = 0; i<8; i++) putchar(des[i]);
	putchar('\n');
	c2 = ft_strcpy(des2, src);
	for (i = 0; i<8; i++) putchar(des2[i]);
}*/
