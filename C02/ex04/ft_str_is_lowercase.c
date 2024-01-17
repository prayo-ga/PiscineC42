/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prayo-ga <prayo-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:48:25 by prayo-ga          #+#    #+#             */
/*   Updated: 2023/08/21 18:43:03 by prayo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
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
