/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:22:54 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/10 11:45:36 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}	
/*
int	main(void)
{	
	int	intarray[] = {1, 2, 3, 4};
	int	i;
	
	i = 0;
	while ( i < 4)
	{
		printf("int[%d] = %d\n",i, intarray[i]);
		i++;
	}
	ft_rev_int_tab(intarray, 4);
	i = 0;
	while ( i < 4)
	{
		printf("int[%d] = %d\n",i, intarray[i]);
		i++;
	}
}*/
