/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:35:48 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/21 11:57:49 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_len(char *str)
{
	int		count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char				*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*str;

	size = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[size])
		size++;
	str = malloc(sizeof(char) * size + 1);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = NULL;
	arr[i].copy = NULL;
	return (arr);
}
