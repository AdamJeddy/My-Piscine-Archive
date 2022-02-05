/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:49:07 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/15 17:31:25 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
