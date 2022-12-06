/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:20:51 by destrada          #+#    #+#             */
/*   Updated: 2022/08/15 17:18:48 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(int num)
{
	if (num > 9)
	{
		recursive(num / 10);
	}
	num = (num % 10) + 48;
	write (1, &num, 1);
}

void	ft_putnbr(int nb)
{
	char	neg;
	neg = '-';
	
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
	nb *= -1;
	write (1, &neg, 1);
	}
	recursive(nb);
}
