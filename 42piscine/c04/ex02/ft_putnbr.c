/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:18:51 by destrada          #+#    #+#             */
/*   Updated: 2022/08/22 15:58:28 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(char c)
{
c = c + 48;
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	neg;

	neg = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
	nb *= -1;
		write (1, &neg, 1);
	}
	if (nb < 10)
		ft_putint(nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putint(nb % 10);
	}
}
