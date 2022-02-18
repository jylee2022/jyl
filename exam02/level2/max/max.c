/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:25:22 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 10:29:56 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	max(int *tab, unsigned int len)
{
	int	i;
	int	length;
	int	temp;

	i = 1;
	length = len - 1;
	while (i < length)
	{
		if (tab[i] < tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
	return tab[0];
}
