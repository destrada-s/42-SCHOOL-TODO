/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:26:42 by destrada          #+#    #+#             */
/*   Updated: 2022/08/18 15:26:49 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;
	int	count;

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


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}

int main()
{
char    dest[] = "Hola, como estas pai";
char    src[] = "Lol";
ft_strcpy(dest, src);
printf("%s", dest);
}