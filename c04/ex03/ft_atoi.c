/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:08:20 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 21:08:53 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	is_space(char c)
{
	return (is_in_string(c, "\t\n\v\f\r "));
}

char	is_operator(char c)
{
	return (is_in_string(c, "+-"));
}

char	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	minus_count;

	result = 0;
	minus_count = 1;
	while (is_space(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-')
			minus_count *= -1;
		str++;
	}
	while (is_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * minus_count);
}
