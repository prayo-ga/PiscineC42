/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prayo-ga <prayo-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:52:19 by prayo-ga          #+#    #+#             */
/*   Updated: 2023/08/11 13:43:19 by prayo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb21(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_comb21(n1 / 10 + '0');
			ft_print_comb21 (n1 % 10 + '0');
			ft_print_comb21 (' ');
			ft_print_comb21(n2 / 10 + '0');
			ft_print_comb21(n2 % 10 + '0');
			if (n1 != 98 || n2 != 99)
				write (1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
