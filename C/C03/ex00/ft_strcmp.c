/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:46:38 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/24 20:05:24 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h> 
int	main()
{
	char	ss1[] = "Aelampago mcqueen morre aos 12";
	char 	ss2[] = "Bolocouco";

	printf("%d", ft_strcmp(ss1, ss2));
}*/
