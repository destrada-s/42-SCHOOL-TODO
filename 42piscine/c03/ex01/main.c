/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:34:51 by destrada          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:50 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	str1[] = "0";
	char	str2[] = "04";

	printf("%d", strncmp(str1, str2, 2));
	return (0);
}