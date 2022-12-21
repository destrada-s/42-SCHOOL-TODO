/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:01:08 by destrada          #+#    #+#             */
/*   Updated: 2022/11/14 19:57:10 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_args(int n, char *clear_cad, int *pt_i, char **argv, int j, int i);

void ft_void(void)
{
	system("leaks -q rush-02");
}

int	main(int argc, char **argv)
{
	char	*clear_cad;
	int		j;
	int		i;
	int		*pt_i;

	atexit(ft_void);
	clear_cad = (char *)malloc(sizeof(char) * 1);
	pt_i = &i;
	j = 0;
	if (argc == 2)
		ft_args(1, clear_cad, pt_i, argv, j, i);
	else if (argc == 3)
		ft_args(2, clear_cad, pt_i, argv, j, i);
	else
		write (1, "Error", 5);
	return (0);
}
