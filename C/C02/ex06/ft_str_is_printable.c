/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:04:42 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/22 19:47:15 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			i++;
		}
		else 
		{
			return (0);
		}
	}
	return (1);
}
/*#include <stdio.h>
int	main()
{
	char	isnop[] = "\n";
	printf("%d", ft_str_is_printable(isnop));
}*/
