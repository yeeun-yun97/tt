/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:25:55 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 21:04:16 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	upper_to_lower(char ch)
{
	return (ch + ('a' - 'A'));
}

int	is_upper_alphabet(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (is_upper_alphabet(str[index]))
		{
			str[index] = upper_to_lower(str[index]);
		}
		index++;
	}
	return (str);
}
