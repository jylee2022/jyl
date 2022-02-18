/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:19:30 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/18 21:37:29 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("----ex04----\n");
	printf("8867\n");
	ft_putnbr_base(1132, "9876543210");
	printf("\n");
	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(1132, "");
	printf("\n");
	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(1132, "aabc!");
	printf("\n");
	printf("-bDBbFjci\n");
	ft_putnbr_base(-2147483648, "abcdefghijABCDEFGHIJ");
	printf("\n");
	printf("*///////\n");
	ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/");
	printf("\n");
	printf("-@@#!\n");
	ft_putnbr_base(-42, "!@#");
	printf("\n");
}
