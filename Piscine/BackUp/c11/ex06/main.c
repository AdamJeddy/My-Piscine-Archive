/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:51:08 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/25 15:55:37 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sort_string_tab(char **tab);

void	ft_putstr(char str)
{
	write(1, &str, 1);
}

void	ft_print(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putstr(argv[i][j]);
			j++;
		}
		ft_putstr('\n');
		i++;
	}
}

int main(int c, char **v)
{
	(void)c;
	ft_sort_string_tab(v);
	ft_print(v);
}
