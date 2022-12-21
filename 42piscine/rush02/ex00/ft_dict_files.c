/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:44:10 by evillado          #+#    #+#             */
/*   Updated: 2022/08/28 23:28:35 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_sizefile(char *argv, int n);
int		ft_searchnb(char *str, int j, int flag, int save_i, char *buf);
void	ft_read_file(char *str ,char *argv, int n, int *pt_found);
void	ft_search(char *buf, char *str, int *pt_found);
void	ft_write(int flag, int i, int j, char *buf);
int		ft_strlen(char *str);

int	ft_sizefile(char *argv, int n)
{
	int		size;
	char	buf[1];
	int		fd;

	size = 1;
	if (n == 2)
		fd = open(argv, O_RDONLY);
	if (n == 1)
		fd = open("numbers.dict", O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, buf, 1) != 0)
			size++;
	}
	else
	{
		write (1, "Error", 5);
		return (0);
	}
	return (size);
}

int	ft_searchnb(char *str, int j, int flag, int save_i, char *buf)
{
	int	save_i2;

	save_i2 = 0;
	while (str[j])
	{
		if (buf[save_i] != str[j])
			flag = 0;
		save_i++;
		j++;
	}
	save_i2 = save_i;
	j--;
	save_i--;
	while (j > 0)
	{
		if (buf[save_i] != str[j])
			flag = 0;
		save_i--;
		j--;
	}
	save_i--;
	if ((buf[save_i] >= '0' && buf[save_i] <= '9'))
		flag = 0;
	if ((buf[save_i2] >= '0' && buf[save_i2] <= '9'))
		flag = 0;
	return (flag);
}

void	ft_read_file(char *str, char *argv, int n, int *pt_found)
{
	int		size;
	int		fd;
	ssize_t	nb_bytes;
	char	*buf;

	fd = 0;
	nb_bytes = 0;
	if (n == 2)
		fd = open(argv, O_RDONLY);
	if (n == 1)
		fd = open("numbers.dict", O_RDONLY);
	size = ft_sizefile(argv, n);
	if (size != 0)
	{
		buf = (char *) malloc(size * sizeof(char));
		if (fd != -1)
		{
			nb_bytes = read(fd, buf, size);
		}
		if (nb_bytes != 0)
		{
			ft_search(buf, str, pt_found);
		}
	}
}

void	ft_search(char *buf, char *str, int *pt_found)
{
	int	i;
	int	j;
	int	save_i;
	int	flag;

	i = 0;
	j = 0;
	while (buf[i] != '\0')
	{
		j = 0;
		save_i = i;
		flag = 1;
		flag = ft_searchnb(str, j, flag, save_i, buf);
		j = 0;
		ft_write(flag, i, j, buf);
		if (flag == 1)
		{
			*pt_found = 1;
			break ;
		}
		i++;
	}
}

void	ft_write(int flag, int i, int j, char *buf)
{
	if (flag == 1)
	{
		j = i;
		while (buf[j] >= '0' && buf[j] <= '9')
				j++;
		while (buf[j] == ' ' || buf[j] == ':')
				j++;
		while (buf[j] != '\n' && (buf[j] >= 32 && buf[j] <= 127))
		{
			write (1, &buf[j], 1);
			j++;
		}
	}
}
