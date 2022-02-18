/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:36:50 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 10:38:49 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (result);
}
