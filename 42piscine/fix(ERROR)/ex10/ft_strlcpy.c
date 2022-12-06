/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:01:35 by destrada          #+#    #+#             */
/*   Updated: 2022/08/18 21:37:02 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

srcsize = ft_strlen(src);
i = 0;
	while ((i < size - 1) && (src[i] != '\0'))
	{
			dest[i] = src[i];
			++i;
	}
	dest[i] = '\0';
	return (srcsize);
}

int main()
{
char    dest[] = "Hola, como";
char    src[] = "Lola512345";
ft_strlcpy(dest, src, 7);
printf("%u", ft_strlcpy(dest, src, 7));
}