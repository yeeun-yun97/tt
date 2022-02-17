/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:49:10 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 20:55:18 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_alphabet(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	is_lower_alphabet(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_lower_alphabet(str[index]) == 0
			&& is_upper_alphabet(str[index]) == 0)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
