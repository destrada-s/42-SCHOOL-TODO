/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:22:44 by destrada          #+#    #+#             */
/*   Updated: 2022/08/27 16:41:53 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_spaces_signs(char *str, int *pt_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*pt_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = ft_spaces_signs(str, &i);
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
