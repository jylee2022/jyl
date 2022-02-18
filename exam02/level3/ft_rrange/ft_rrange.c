/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:16:08 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 11:18:41 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	*tab = malloc(sizeof(int) * ft_abs(end - start) + 1);

	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i] = end;
	while (end < start)
	{
		tab[i] = end;
		end++;
		i++;
	}
	tab[i] = end;
	return (tab);
}
