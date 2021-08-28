/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:00:16 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/20 17:13:00 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char hold;
	long nbb;

	nbb = nb;
	if (nbb < 0)
	{
		write(1, "-", 1);
		nbb = -nbb;
	}
	if (nbb >= 10)
	{
		ft_putnbr(nbb / 10);
		ft_putnbr(nbb % 10);
	}
	else
	{
		hold = nbb + 48;
		write(1, &hold, 1);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
