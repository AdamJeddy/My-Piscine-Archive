/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:05:14 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/07 09:12:43 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int nb)
{
	if (nb > 9)
	{
		write(1, &"0123456789"[nb / 10], 1);
		write(1, &"0123456789"[nb % 10], 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, &"0123456789"[nb % 10], 1);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = -1;
	while (++num1 <= 99)
	{
		num2 = num1;
		while (++num2 <= 99)
		{
			display(num1);
			write(1, " ", 1);
			display(num2);
			if (num1 < 98 || num2 < 99)
				write(1, ", ", 2);
		}
	}
}