/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:52:32 by destrada          #+#    #+#             */
/*   Updated: 2022/08/30 15:56:14 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcpm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != 0 || s2[i] != 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
	j = i + 1;
		while (j < argc)
		{
			if (ft_strcpm(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
		j++;
		}
	i++;
	}
	i = 1;
	while (argv[i] != 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
