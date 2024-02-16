/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:38:12 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/29 13:29:17 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int	d;

	d = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if ((unsigned int) nb > 0)
	{
		while (d <= (unsigned int) nb / d)
		{
			if ((unsigned int) nb % d == 0)
			{
				return (0);
			}
			else
			{
				d++;
			}
		}
		return (1);
	}
	return (0);
}
/*#include <stdio.h>

int	main()
{
	printf("%d", ft_is_prime(59));
}*/
