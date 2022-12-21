/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_separate_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:51:53 by destrada          #+#    #+#             */
/*   Updated: 2022/11/14 19:54:29 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
void	ft_read_file(char *str, char *argv, int n, int *pt_found);

void	ft_mod_0(char *str, int i, char *argv, int n, int *pt_found)
{
	char	*nb_letter;
	char	*bignb_letter;

	nb_letter = (char *)malloc(sizeof(char) * 1);
	bignb_letter = (char *)malloc(sizeof(char) * 3);
	if (str[i] != '0')
	{
		nb_letter[0] = str[i];
		nb_letter[1] = '\0';
		bignb_letter[0] = '1';
		bignb_letter[1] = '0';
		bignb_letter[2] = '0';
		bignb_letter[3] = '\0';
		ft_read_file(nb_letter, argv, n, pt_found);
		write(1, " ", 1);
		ft_read_file(bignb_letter, argv, n, pt_found);
		write(1, " ", 1);
	}	
	free(nb_letter);
	free(bignb_letter);
}

void	ft_mod_2(char *str, int i, char *argv, int n, int *pt_found)
{
	int		next;
	char	*nb_letter;

	nb_letter = (char *)malloc(sizeof(char) * 2);
	next = i + 1;
	if (str[i] != '0')
	{
		if (str[i] == '1' && (str[next] >= '1' && str[next] <= '9'))
		{
			nb_letter[0] = str[i];
			nb_letter[1] = str[next];
			nb_letter[2] = '\0';
		}
		else
		{
			nb_letter[0] = str[i];
			nb_letter[1] = '0';
			nb_letter[2] = '\0';
		}
		ft_read_file(nb_letter, argv, n, pt_found);
		write(1, " ", 1);
	}
	free(nb_letter);
}

void	ft_mod_1(char *str, int i, int pos, int strlen, char *argv, int n, int *pt_found)
{
	int		zero;
	int		before;
	char	*nb_letter;
	char	*bignb_letter;

	before = i - 1;
	zero = 1;
	nb_letter = (char *)malloc(sizeof(char) * 1);
	if (str[i] != '0' && ((str[before] != '1' && (str[i] >= '1' && str[i] <= '9')) || (str[i] == '0' && strlen == 1)))
	{
		nb_letter[0] = str[i];
		nb_letter[1] = '\0';
		ft_read_file(nb_letter, argv, n, pt_found);
	}
	free(nb_letter);
	if (pos > 1)
	{
		bignb_letter = (char *)malloc(sizeof(char) * (pos));
		if (str[i] != '0' || (str[before - 1] >= '1'
				&& str[before - 1] <= '9') || (str[before] >= '1'
				&& str[before] <= '9'))
		{
			write(1, " ", 1);
			bignb_letter[0] = '1';
			while (zero < pos)
			{
				bignb_letter[zero] = '0';
				zero++;
			}
			nb_letter[zero] = '\0';
			ft_read_file(bignb_letter, argv, n, pt_found);
			write(1, " ", 1);
			free(bignb_letter);
		}
	}
}

void	ft_separate_num(char *str, char *argv1, int n)
{
	int		i;
	int		pos;
	int		found;
	int		*pt_f;

	i = 0;
	found = 0;
	pt_f = &found; 
	ft_read_file(&str[i], argv1, n, pt_f);
	if (found == 0)
	{
		while (str[i] != '\0')
		{
					pos = ft_strlen(str) - i;
					if (pos % 3 == 0)
						ft_mod_0(str, i, argv1, n, pt_f);
					if (pos % 3 == 2)
						ft_mod_2(str, i, argv1, n, pt_f);
					if (pos % 3 == 1)
						ft_mod_1(str, i, pos, ft_strlen(str), argv1, n, pt_f);
			i++;
		}
	}
}
