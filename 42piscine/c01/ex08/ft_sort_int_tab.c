/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:15:53 by destrada          #+#    #+#             */
/*   Updated: 2022/08/17 11:57:24 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tempvar;
	int	i;
	int	next;

i = 0;
	while (i < size)
	{
		next = i + 1;
		while (next < size)
		{
			if (tab[i] > tab[next])
			{
				tempvar = tab[i];
				tab[i] = tab[next];
				tab[next] = tempvar;
			}
			next++;
		}
		i++;
	}
}
