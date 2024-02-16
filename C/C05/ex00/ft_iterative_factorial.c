/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:36:13 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/29 12:39:56 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1; 
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
/*#include <stdio.h>
int	main()
{
	int	nb = 5;
	printf("%d", ft_iterative_factorial(nb));

}*/
