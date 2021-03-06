/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:49:07 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/07 12:01:05 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long long int nbb;

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
		write(1, &"0123456789"[nbb % 10], 1);
}