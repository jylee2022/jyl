/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:23:00 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/17 22:27:44 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_last_param(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_last_param(argv[argc - 1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
