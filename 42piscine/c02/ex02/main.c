/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_is_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:04:40 by destrada          #+#    #+#             */
/*   Updated: 2022/08/17 18:33:13 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 96 && str[i] <= 122))
		i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char array[]= "Holacomoestas";
	printf("%d", ft_str_is_alpha(array));
}
