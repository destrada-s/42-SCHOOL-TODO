/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:04:40 by destrada          #+#    #+#             */
/*   Updated: 2022/08/18 19:12:17 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
		i++;
		else
			return (0);
	}
	return (1);
    
}

int main()
{
	char array[]= "5767745";
	printf("%d", ft_str_is_numeric(array));
}