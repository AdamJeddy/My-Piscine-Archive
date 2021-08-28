/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:41:52 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 14:24:43 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char c)
{
	int		mod1;
	int		mod2;
	char	*hex;

	hex = "0123456789abcdef";
	mod1 = c / 16;
	mod2 = c % 16;
	ft_putchar('\\');
	ft_putchar(hex[mod1]);
	ft_putchar(hex[mod2]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
