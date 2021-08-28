/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_ft_is_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:17:40 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/25 10:38:06 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g_temp;
int g_done = 0;

int		comp(int a, int b)
{
	return (a - b);
}

int		nice(void)
{
	if (g_temp > 0)
		return (1);
	return (-1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int flag;

	i = -1;
	flag = (*f)(tab[i], tab[i + 1]);
	while (++i < length - 1)
	{
		g_temp = (*f)(tab[i], tab[i + 1]);
		if (g_done == 0 && g_temp != 0)
		{
			flag = nice();
			g_done++;
		}
		else if (flag == 1)
		{
			if (g_temp < 0)
				return (0);
		}
		else
		{
			if (g_temp > 0)
				return (0);
		}
	}
	return (1);
}

int		main(void)
{
	int (*com)(int, int);

	com = &comp;
	int arr[55555] = {2, 2, 3, 3, 3};
	printf("%d", ft_is_sort(arr, 5, com));
}
