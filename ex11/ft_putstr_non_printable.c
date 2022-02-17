/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:53:31 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/17 21:47:48 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable_char(char ch)
{
	if (ch >= ' ' && ch <= '~')
		return (1);
	else
		return (0);
}

void	write_char(char ch)
{
	if (is_printable_char(ch))
	{
		write(1, &ch, 1);
	}
	else
	{
		write(1, "\\", 1);
		write(1, &"0123456789abcdef"[(int)((unsigned char)ch / 16)], 1);
		write(1, &"0123456789abcdef"[(int)((unsigned char)ch % 16)], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write_char(str[index]);
		index++;
	}
}
