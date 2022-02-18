/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:30:52 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/19 02:36:04 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	base_index(char *base, char ch)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (ch == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_num;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	base_num = check_base(base);
	if (!base_num)
		return (0);
	while (*str == '\f' || *str == '\t' || *str == ' '
		|| *str == '\n' || *str == '\r' || *str == '\v')
		str++;
	
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		if ((base_index(base, *str++)) != -1)
			result = result * base_num + (base_index(base, *str));
		else
			break ;
	}
	return (result * sign);
}
