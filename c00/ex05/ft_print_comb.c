/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 07:59:44 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/07 08:56:17 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char g_com = ',';
const char g_space = ' ';
static char g_num1 = '/';
static char g_num2 = '1';
static char g_num3 = '2';

void ft_print_num3()
{
	write(1, &g_num1, 1);
	write(1, &g_num2, 1);
	write(1, &g_num3, 1);
}

void ft_print_comb(void)
{
	while (++g_num1 <= '7')
	{
		g_num2 = g_num1;
		while (++g_num2 <= '8')
		{
			g_num3 = g_num2;
			while (++g_num3 <= '9')
			{
				ft_print_num3();
				if (g_num1 != '7' || g_num2 != '8' || g_num3 != '9')
					write(1, ", ", 2);
			}
		}
	}
}