/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 04:13:48 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/25 04:16:36 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	fprime(int nbr)
{
	int	i;

	i = 2;
	if (nbr == 1)
	{
		printf("1");
		return ;
	}
	while (nbr >= i)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr != i)
				printf("*");
			nbr /= i;
			i--;
		}
		i++;
	}
}
