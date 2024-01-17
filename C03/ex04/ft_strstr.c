/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prayo-ga <prayo-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:06:06 by prayo-ga          #+#    #+#             */
/*   Updated: 2023/08/24 15:29:14 by prayo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*begin;
	char	*pattern;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		begin = str;
		pattern = to_find;
		while (*str == *pattern && *pattern != '\0')
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
			return (begin);
		str = begin + 1;
	}
	return (NULL);
}
