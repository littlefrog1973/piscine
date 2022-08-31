/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:56:36 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/09 18:02:54 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div_main;
	int	mod_main;

	a = 123;
	b = 10;
	
	ft_div_mod(a, b, &div_main, &mod_main);
       	printf("div = %d: mod = %d\n",div_main, mod_main);
}*/
