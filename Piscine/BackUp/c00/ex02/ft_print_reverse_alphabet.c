/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:23 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/07 08:51:02 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char var;

	var = 'z' + 1;
	while (--var >= 'a')
		write(1, &var, 1);
}

int main()
{
	ft_print_reverse_alphabet();
}