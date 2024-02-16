/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:57:36 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/24 19:39:28 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else 
	{
		return (s1[i] - s2[i]);
	}
}
/*#include <stdio.h>
int	main()
{
	char	ss1[] = "aleluia";
	char	ss2[] = "aracoles";
	int	nb = 5;

	printf("%d", ft_strncmp(ss1, ss2, nb));
}*/
