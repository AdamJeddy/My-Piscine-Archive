/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:17:40 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/25 10:42:02 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_temp;
int g_done = 0;

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

	i = 0;
	flag = (*f)(tab[i], tab[i + 1]);
	while (i < length - 1)
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
		i++;
	}
	return (1);
}
