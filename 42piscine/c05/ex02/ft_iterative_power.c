/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:33:44 by destrada          #+#    #+#             */
/*   Updated: 2022/08/25 10:12:03 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
