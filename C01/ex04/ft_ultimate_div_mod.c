/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:03:48 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 18:12:40 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 123;
	b = 10;
	printf("a = %d: b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d: b = %d\n", a, b);
}*/
