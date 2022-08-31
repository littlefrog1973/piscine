/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:49:28 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/05/17 13:34:24 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_alphabet(char *str, int i)
{
	int	is_lower;
	int	is_upper;

	if (str[i] != '\0')
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
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}

int	ft_str_is_numeric(char *str)
{
	if (!(*str >= '0' && *str <= '9'))
	{
		return (0);
	}
	return (1);
}

void	check_cap(char *str, int i, int *is_cap)
{
	if (!ft_is_alphabet(str, i))
	{
		*is_cap = 0;
	}
	if (ft_str_is_numeric(&str[i]))
	{
		*is_cap = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_cap;

	ft_strlowcase(str);
	i = 0;
	is_cap = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphabet(str, i) && !is_cap)
		{
			is_cap = 1;
			str[i] = str[i] + ('A' - 'a');
		}
		check_cap(str, i, &is_cap);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
