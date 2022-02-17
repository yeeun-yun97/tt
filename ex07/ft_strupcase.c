/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:05:18 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 21:03:40 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	lower_to_upper(char ch)
{
	return (ch - ('a' - 'A'));
}

int	is_lower_alphabet(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_lower_alphabet(str[index]))
		{
			str[index] = lower_to_upper(str[index]);
		}
		index++;
	}
	return (str);
}
