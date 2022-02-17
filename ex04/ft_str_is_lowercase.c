/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:56:58 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 20:36:33 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower_alphabet(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_lower_alphabet(str[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
