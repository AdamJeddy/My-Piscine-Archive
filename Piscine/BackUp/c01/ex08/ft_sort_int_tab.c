/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:59:19 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/08 11:43:08 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;

	if (size > 0)
	{
		ft_sort_int_tab(tab, size - 1);
		x = tab[size];
		y = size - 1;
		while (y >= 0 && tab[y] > x)
		{
			tab[y + 1] = tab[y];
			y--;
		}
		tab[y + 1] = x;
	}
}
