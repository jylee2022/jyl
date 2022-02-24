/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 01:54:43 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/25 01:59:59 by juyolee          ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	len;

	len = 0;
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len > 0)
		{
			ft_putchar(av[1][len - 1]);
			len--;
		}
	}
	ft_putchar('\n');
}
