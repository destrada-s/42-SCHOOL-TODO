/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiPRIMERO.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:11:44 by destrada          #+#    #+#             */
/*   Updated: 2022/08/23 22:45:40 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checkneg(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		cont++;
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	if (cont % 2 == 1)
		return (-1);
	return (1);
}

void	ft_changestring(char *str, char *stringnum)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	z = 1;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= '0' && str[i] <= '9') && z == 1)
		{
			j = 0;
			while (str[i + j] != '\0')
			{
				if (str[i + j] >= '0' && str[i + j] <= '9')
					stringnum[j] = str[i + j];
				else
					break ;
				j++;
				z = 0;
			}
			stringnum[j] = '\0';
		}
		i++;
	}
}

int	ft_putint(char c, int power)
{
	int	i;
	int	num;
	int	powerof10;

	c = c - 48;
	i = 0;
	powerof10 = 1;
	while (i < power)
	{
		powerof10 = powerof10 * 10;
		i++;
	}
	num = c * powerof10;
	return (num);
}

int	ft_recursive(char *str, int i, int num)
{
	int	numlen;

	i = 0;
	while (str[i] != '\0')
		i++;
	numlen = i - 1;
	i = 0;
	if (i == numlen)
		return (num + ft_putint(str[i], numlen));
	else
	{	
		num = ft_recursive(&str[i + 1], i, num);
		return (num + ft_putint(str[i], numlen));
	}
}

int	ft_atoi(char *str)
{
	int		num;
	int		i;
	char	c;
	char	numinstring[11];	

	i = 0;
	num = 0;

	if (ft_checkneg(str) == -1)
	{
		ft_changestring(str, numinstring);
		num = ft_recursive(&numinstring[i], i, num);
		num *= -1;
	}
	else if (ft_checkneg(str) == 1)
	{
		ft_changestring(str, numinstring);
		num = ft_recursive(&numinstring[i], i, num);
	}
	return (num);
}

