/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:14:09 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/24 20:41:43 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	if (to_find[i] == '\0' && str[i] == '\0')
		return (&str[i]);
	while (to_find[len] != '\0')
		len++;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (j == len) 
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char	s[100] = "Obrigado";
	char 	to_[] = "\n";
	char	*result;

	result = ft_strstr(s, to_);
	printf("%s", result);
	//printf("%s", strstr(s, to_ ));
}*/
