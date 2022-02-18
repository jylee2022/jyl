/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:19:56 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 08:26:12 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str1 = "This is competition";
	char	*str2 = "Thi";

	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
}
