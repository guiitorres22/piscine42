/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:02:28 by gtinani-          #+#    #+#             */
/*   Updated: 2024/01/19 11:19:45 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;

	while ( index > size)
	{
		temp = tab[index];
		tab[index] = tab[size -1];
		tab[size -1] = temp
		index++
		size--
	}
}
