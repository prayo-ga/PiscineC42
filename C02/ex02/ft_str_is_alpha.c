/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prayo-ga <prayo-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:11:53 by prayo-ga          #+#    #+#             */
/*   Updated: 2023/08/17 14:25:25 by prayo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0' && res == 1)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
