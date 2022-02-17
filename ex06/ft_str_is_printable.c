/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:02:20 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/17 12:19:40 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable_char(char ch)
{
	if (ch >= ' ' && ch <= '~')
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_printable_char(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
