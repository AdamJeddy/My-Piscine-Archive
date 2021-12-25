/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:41:52 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 14:24:43 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] > 126)
			print_hex(str[i]);
		else
			write(1, &str[i], 1);
	}
}