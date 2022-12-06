/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:01:35 by destrada          #+#    #+#             */
/*   Updated: 2022/08/18 17:44:55 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
		if (src[i] == '\0')
			count++;
	}
	return (count);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

i = 0;
	while ((i < size) && (src[i] != '\0'))
	{
			dest[i] = src[i];
			++i;
		if ((i == size) && (size < ft_strlen(src)))
			dest[i] = '\0';
		if (src[i] == '\0')
			dest[i] = src[i];
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src) - 1);
}

int main()
{
char    dest[] = "Hola, como";
char    src[] = "Lola512345";
ft_strlcpy(dest, src, 7);
printf("%u", ft_strlcpy(dest, src, 7));
}