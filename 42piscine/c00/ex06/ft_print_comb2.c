/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:07:36 by destrada          #+#    #+#             */
/*   Updated: 2022/12/08 07:43:14 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_digits(int n)
{	
	n = n + 48;
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	char	space;
	int		a;
	int		b;

	space = ' ';
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{	
			if (!(a == 0 && b == 1))
				write (1, ", ", 2);
			ft_put_digits(a / 10);
			ft_put_digits(a % 10);
			write (1, &space, 1);
			ft_put_digits(b / 10);
			ft_put_digits(b % 10);
			b++;
		}
		a++;
	}
}
