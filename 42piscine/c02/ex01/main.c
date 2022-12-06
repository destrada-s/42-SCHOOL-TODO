/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:01:35 by destrada          #+#    #+#             */
/*   Updated: 2022/08/18 21:30:20 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
			dest[i] = src[i];
			++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
char    dest[20];
char    src[] = "Lola5";
ft_strncpy(dest, src, 20);
printf("%s", dest);
}