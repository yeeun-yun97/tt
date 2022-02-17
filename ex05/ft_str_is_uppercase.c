/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:01:42 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 20:46:28 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_alphabet(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_upper_alphabet(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
