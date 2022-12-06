/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:33:00 by destrada          #+#    #+#             */
/*   Updated: 2022/08/25 10:36:07 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	f0;
	int	f1;

	f0 = 0;
	f1 = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (f0);
	if (index == 1)
		return (f1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
