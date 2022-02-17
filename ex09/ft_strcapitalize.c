/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:27:55 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/15 21:44:52 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower_alphabet(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}

int	is_upper_alphabet(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	is_number(char ch)
{
	if (ch >= '0' && ch <= '9')
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
			str[index] = (str[index] + ('a' - 'A'));
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	is_First;
	int	index;

	ft_strlowcase(str);
	is_First = 1;
	index = 0;
	while (str[index])
	{
		if (is_lower_alphabet(str[index]))
		{
			if (is_First)
			{
				is_First = 0;
				str[index] = (str[index] - ('a' - 'A'));
			}	
		}
		else if (is_number(str[index]) == 1)
			is_First = 0;
		else
			is_First = 1;
		index++;
	}
	return (str);
}
