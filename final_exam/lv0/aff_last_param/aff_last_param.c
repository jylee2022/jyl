/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 00:08:51 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/25 00:12:55 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[ac - 1][i])
		{
			write(1, &av[ac - 1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}