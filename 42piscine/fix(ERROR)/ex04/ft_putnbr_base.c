/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:08:40 by destrada          #+#    #+#             */
/*   Updated: 2022/08/23 19:09:46 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	i++;
	return (i);
}

void	ft_base(int posofbase, char *base )
{
	int	i;
	int	c;

	i = 0;
	while (base[i] != '\0')
	{
		if (i == posofbase)
		{
			c = base[i];
			write (1, &c, 1);
		}
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 10)
		ft_base(nbr, base);
	else
	{
		ft_putnbr_base(nbr / ft_baselen(base), base);
		ft_base(nbr % ft_baselen(base), base);
	}
}

int main()
{
	int nbr;
	char base[] = "01";

	nbr = 25435;
	ft_putnbr_base(nbr, base);
}
