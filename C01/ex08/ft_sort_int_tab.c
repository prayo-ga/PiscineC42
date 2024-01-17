/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prayo-ga <prayo-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:08:14 by prayo-ga          #+#    #+#             */
/*   Updated: 2023/08/15 15:49:58 by prayo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i - 1];
				tab[i -1] = tab [i];
				tab[i] = temp;
				swap = 1;
			}
			i++;
		}
	}
}
