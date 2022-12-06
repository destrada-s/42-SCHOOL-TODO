/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:27:09 by destrada          #+#    #+#             */
/*   Updated: 2022/08/19 09:23:13 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	update;

	ft_strlowcase(str);
	i = 0;
	update = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (update == 1)
			{
				str[i] -= 32;
				update = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			update = 0;
		else
			update = 1;
		i++;
	}
	return (str);
}

int main() 
{
	char array[] = "salut, coMMent Tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(array);
	printf("%s", array);
}