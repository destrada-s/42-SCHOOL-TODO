/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 08:47:02 by destrada          #+#    #+#             */
/*   Updated: 2022/12/08 12:12:54 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Finds from left to right the  value that can be
	 incremented and increments it*/
void	ft_combn_increment_value(int *combn, int *i, int n, int max)
{
	int		increment;

	*i = n - 1;
	while (*i >= 0)
	{
		increment = combn[*i];
		max--;
		if (increment < max)
		{
			increment++;
			combn[*i] = increment;
			*i = *i + 1;
			while (*i < n)
			{
				increment++;
				combn[*i] = increment;
				*i = *i + 1;
			}
			ft_putchar(',');
			ft_putchar(' ');
			break ;
		}
		*i = *i - 1;
	}
}

/*prints out each number - loop separated in 2 functions cause norminette :|*/
void	ft_res_combn(int *combn, int i, int n)
{
	int		max;

	while (i > 0)
	{
		max = 10;
		i = 0;
		while (i < n)
		{
			ft_putchar(combn[i] + '0');
			i++;
		}
		ft_combn_increment_value(combn, &i, n, max);
	}
}

void	ft_print_combn(int n)
{
	int		combn[10];
	int		i;

	i = 0;
	if (n <= 0 || n > 9)
		return ;
	while (i < n)
	{
		combn[i] = i;
		i++;
	}
	ft_res_combn(combn, i, n);
}
