/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:54:04 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 10:07:42 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	*str;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= ' ' && av[1][i + 1] > 32)
				str = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (str && str[i] > 32)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
