/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prayo-ga <prayo-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:01:02 by prayo-ga          #+#    #+#             */
/*   Updated: 2023/08/21 16:12:18 by prayo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (str[0] == '\0')
	{
		res = 1;
	}
	while (str[i] != '\0' && res == 1)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			res = 1;
		}
		else
		{
			res = 0;
		}
		i++;
	}
	return (res);
}
