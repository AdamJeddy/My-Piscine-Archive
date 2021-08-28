/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:08:41 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/20 21:04:57 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		size;
	int		i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(arr) * size);
	if (arr == 0)
		return (0);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
