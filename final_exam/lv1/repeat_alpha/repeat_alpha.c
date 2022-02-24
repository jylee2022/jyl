/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 01:45:37 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/25 01:53:02 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] -96;
			while (count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
