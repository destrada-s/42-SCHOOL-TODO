/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:34:51 by destrada          #+#    #+#             */
/*   Updated: 2022/08/23 19:33:38 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	str1[20] = "hola ";
	char	str2[] = "como estas";

	printf("%s", strcat(str1, str2));
	return (0);
}