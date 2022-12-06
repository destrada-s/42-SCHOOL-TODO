/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:17:52 by destrada          #+#    #+#             */
/*   Updated: 2022/08/17 11:12:00 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	midsize;
	int	swapper;
	int	*changefirst;
	int	*changelast;

	index = 0;
	midsize = size / 2;
	changefirst = tab;
	changelast = tab + size - 1;
	while (index < midsize)
	{
		swapper = *changefirst;
		*changefirst = *changelast;
		*changelast = swapper;
		index++;
		changefirst++;
		changelast--;
	}
}
