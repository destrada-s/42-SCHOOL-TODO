/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleancode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:59:32 by destrada          #+#    #+#             */
/*   Updated: 2022/11/14 19:40:48 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_separate_num(char *str, char *argv1, int n);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_clearstr(char *str, int *pt_i)
{
	int		i;
	int		j;
	int		save_i;
	int		len;

	i = 0;
	j = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '0')
	{
		i++;
		if (i == ft_strlen(str))
			return (-2);
	}
	*pt_i = i;
	save_i = i;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	len = ft_strlen(str) - save_i;
	return (len);
}

void	ft_args(int n, char *clear_cad, int *pt_i, char **argv, int j, int i)
{
	int		len;

	len = ft_clearstr(argv[n], pt_i);
	if (len == -2)
	{
		clear_cad = (char *)malloc(sizeof(char) * 1);
		clear_cad[j] = '0';
	}
	else if (len > 0)
		clear_cad = (char *)malloc(sizeof(char) * len);
	while (j < len)
	{
		clear_cad[j] = argv[n][i];
		j++;
		i++;
	}
	if (len != -1)
		ft_separate_num(clear_cad, argv[1], n);
	else
		write (2, "Error", 5);
}
