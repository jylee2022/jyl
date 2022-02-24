/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 03:59:19 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/25 04:11:31 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	char	**tab;

	tab = (char **)malloc(sizeof(char) * 100);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * 100);
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int main(int ac, char **av)
{
	int			i;
	char 	**words;

	i = 1;
	if (ac > 1)
	{
		words = ft_split(av[1]);
		while (words[i])
		{
			ft_putstr(words[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(words[0]);
	}
	write(1, "\n", 1);
	return (0);
}
