/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 08:08:20 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/27 15:09:09 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = 0;
	len = 0;
	while (len < argc)
	{
		len++;
	}
	while (len > 1)
	{
		while (argv[len - 1][j] != '\0')
		{
			write(1, &argv[len -1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		len--;
	}
}
