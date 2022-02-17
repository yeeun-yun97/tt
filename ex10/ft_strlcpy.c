/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeyun <yeyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:48:24 by yeyun             #+#    #+#             */
/*   Updated: 2022/02/16 15:00:35 by yeyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_length(char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		index++;
	}
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] && index + 1 < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (count_length(src));
}
