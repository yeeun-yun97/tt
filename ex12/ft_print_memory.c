/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:23:02 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/17 18:02:42 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_addr(char *data)
{
	unsigned long long	address;
	char				arr[17];
	 int				index;

	address = (unsigned long long)data;
	index = 15;
	while (index >= 0)
	{
		arr[index] = "0123456789ABCDEF"[address % 16];
		address /= 16;
		index--;
	}
	arr[16] = ':';
	write(1, arr, 17);
	write(1, " ", 1);
}

void	write_raw(char *data)
{
	int		index;
	char	ch;

	index = 0;
	while (data[index] && index < 16)
	{
		ch = data[index];
		if (ch >= ' ' && ch <= '~')
			write(1, &ch, 1);
		else
			write(1, ".", 1);
		index++;
	}
}

void	write_contents(char *data)
{
	int	index;
	int	is_finished;

	index = 0;
	is_finished = 0;
	while (index < 16)
	{
		if (is_finished == 1 || data[index] == 0)
		{
			write(1, "  ", 2);
			is_finished = 1;
		}
		else
		{
			write(1, &"0123456789ABCDEF"[data[index] / 16], 1);
			write(1, &"0123456789ABCDEF"[data[index] % 16], 1);
		}
		if (index % 2 == 1)
			write(1, " ", 1);
		index++;
	}
}

void	print_line(char *data)
{
	write_addr(data);
	write_contents(data);
	write_raw(data);
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		print_line((char *)&addr[index]);
		index += 16;
	}
}
