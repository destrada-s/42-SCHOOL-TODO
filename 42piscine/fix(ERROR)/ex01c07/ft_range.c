/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:29:32 by destrada          #+#    #+#             */
/*   Updated: 2022/08/25 21:38:42 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	range;
	int	i;
	int	value;

	ptr = NULL;
	range = max - min;
	if (min >= max)
		return (ptr);
	ptr = (int *)malloc(4 * range);
	i = 0;
	value = min;
	while (i < range)
	{
		ptr[i] = value;
		i++;
		value++;
	}
	return (ptr);
}
