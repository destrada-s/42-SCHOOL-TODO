/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:34:51 by destrada          #+#    #+#             */
/*   Updated: 2022/08/22 14:08:42 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char	str1[20] = "Hola como estas";
	char	str2[] = "la h laj ";

	printf("%lu", strlcat(str1, str2, 4));
	printf("%s", str2);
	return (0);
}