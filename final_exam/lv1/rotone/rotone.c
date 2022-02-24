/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:05:12 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/25 02:10:53 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	temp;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'Y')
				|| (av[1][i] >= 'a' && av[1][i] <= 'y'))
			{
				temp = av[1][i] + 1;
				write(1, &temp, 1);
			}
			else if (av[1][i] == 'Z')
				write(1, "A", 1);
			else if (av[1][i] == 'z')
				write(1, "a", 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
