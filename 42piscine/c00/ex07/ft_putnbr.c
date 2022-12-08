/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 08:02:19 by destrada          #+#    #+#             */
/*   Updated: 2022/12/08 08:44:25 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_digit(int n)
{
		n = n + 48;
	write (1, &n, 1);
}

/*What you need to know*/
/*Recursividad - condicion base y recursiva*/
/*2 good options - convert int to long so INT MIN Works*/
/*Do it with int with another function- will
work always even if long amount changes*/

void	ft_putnbr_rec(int nb)
{
	if (nb > -10 && nb < 10)
	{
		if (nb < 0)
			ft_put_digit(-nb);
		else
			ft_put_digit(nb);
	}
	else
	{
		ft_putnbr_rec(nb / 10);
		if (nb < 0)
			ft_put_digit(-(nb % 10));
		else
			ft_put_digit(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	ft_putnbr_rec(nb);
}
/*
void	ft_put_digit(int n)
{
	n = n + 48;
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		ft_put_digit(n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_put_digit(n % 10);
	}
}
*/
