/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:32:47 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/15 10:47:32 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_i = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == base[i + 1])
			return (-1);
		while (base[j])
			if (base[i] == base[j++])
				return (-1);
		i++;
	}
	if (i < 2)
		return (-1);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	answer[50];
	long	temp;

	temp = nbr;
	size = check_base(base);
	if (size == -1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		temp = -temp;
	}
	if (temp == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	while (temp)
	{
		answer[g_i++] = base[temp % size];
		temp /= size;
	}
	while (g_i > 0)
		ft_putchar(answer[--g_i]);
}
