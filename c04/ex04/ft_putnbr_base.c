/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:12:23 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 21:53:15 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nbr_l;
	int		size_base;
	int		nbr_result[100];
	int		i;

	if (!check_base(base))
		return ;
	size_base = ft_strlen(base);
	if (nbr < 0)
	{
		nbr_l = nbr;
		nbr_l = -nbr_l;
		ft_putchar('-');
	}
	else
		nbr_l = nbr;
	i = 0;
	while (nbr_l > 0)
	{
		nbr_result[i] = nbr_l % size_base;
		nbr_l = nbr_l / size_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr_result[i]]);
}
