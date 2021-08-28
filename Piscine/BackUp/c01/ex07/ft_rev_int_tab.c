/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:28:50 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/07 19:51:50 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int temp;

	counter = 0;
	size--;
	while (counter < size)
	{
		temp = tab[counter];
		tab[counter] = tab[size];
		tab[size] = temp;
		counter++;
		size--;
	}
}
