/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 08:45:44 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/17 15:51:47 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int temp;

	temp = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		temp *= nb;
		nb--;
	}
	return (temp);
}