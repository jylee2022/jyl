/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyolee <juyolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:50:41 by juyolee           #+#    #+#             */
/*   Updated: 2022/02/14 00:05:37 by juyolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#define MAX_PAGE_SIZE 14

void	ft_buffer_number(int number, int base, int buffer[], int i)
{
	if (number > base - 1)
		ft_buffer_number(number / base, base, buffer, i + 1);
	buffer[i] = number % base;
}

void	ft_write_hex(unsigned int number, int base, int char_count)
{
	int	buffer[MAX_PAGE_SIZE + 1];
	int	i;

	i = -1;
	while (i++ < MAX_PAGE_SIZE)
		buffer[i] = 0;
	ft_buffer_number(number, base, buffer, 0);
	i = -1;
	while (i++ < char_count)
		write(1, &"0123456789abcdefgh"[buffer[char_count - i]], 1);
}

void	ft_write_char(char *c)
{
	int	i;

	i = 0;
	if (c[i] >= ' ' && c[i] != 127)
		ft_putchar(c[i]);
	else
		ft_putchar('.');
}

void	ft_print_memory_at(void *start_addr, unsigned int size, char *curr_addr)
{
	int i;

	ft_write_hex((unsigned int)curr_addr, 16, MAX_PAGE_SIZE);
	write(1, &": ", 2);
	i = 0;
	while (i++ < 16)
	{
		if (start_addr + size <= (void *)(curr_addr + i - 1))
			write(1, &"  ", 2);
		else
			ft_write_hex((unsigned char)*(curr_addr + i - 1), 16, 1);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	i = 0;
	while (i++ < 16)
		if (start_addr + size > (void *)(curr_addr + i - 1))
			ft_write_char((char *)curr_addr + i - 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr_addr;

	curr_addr = (char *)addr;
	while ((void *)curr_addr < (addr + size))
	{
		ft_print_memory_at(addr, size, curr_addr);
		ft_putchar("\n");
		curr_addr += 16;
	}
	return (addr);
}
