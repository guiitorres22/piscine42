/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:37:24 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/24 20:55:58 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i]; 
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char d[] = "Eu tinha uma galinha";
	char s[] = "Que se chamava Marilu";
	unsigned int n = 8;

	printf("%s", ft_strncat(d, s, n));
}*/
