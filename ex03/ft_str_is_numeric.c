/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:56:58 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 20:36:29 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_number(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
