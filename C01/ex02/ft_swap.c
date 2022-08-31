/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:41:47 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 17:48:04 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 0;

	printf("a = %d: b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d: b = %d\n", a, b);
}*/
