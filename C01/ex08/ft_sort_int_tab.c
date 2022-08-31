/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:42:42 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/10 11:43:49 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	intarray[] = {-4, 3, 1, -1};
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("intarray[%d] = %d\n", i, intarray[i]);
		i++;
	}
	ft_sort_int_tab(intarray, 4);

	i = 0;
	while (i < 4)
	{
		printf("intarray[%d] = %d\n", i, intarray[i]);
		i++;
	}
}*/
