/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:23:55 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/13 01:24:46 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*str_base;
	char	str_cap[36];
	int	index;

	//str_base = "salut, c0mment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str_base = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	index = 0;
	while (index < 37)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	ft_strcapitalize(&str_cap[0]);
	//printf("base        : %s\n", str_base);
	//printf("capitalized : %s\n", str_lower);
	printf("%s\n", str_cap);
}
