/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:16:16 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/17 19:52:06 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;

	ans = 1;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (power)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
