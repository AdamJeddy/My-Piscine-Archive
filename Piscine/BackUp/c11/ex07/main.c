/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:51:08 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/25 16:23:34 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char str)
{
	write(1, &str, 1);
}

void	ft_print(char **argv)
{
	int i;
	int j;

	i = -1;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
			ft_putstr(argv[i][j++]);
		ft_putstr('\n');
	}
}

int main(int c, char **v)
{
	(void)c;
	ft_advanced_sort_string_tab(v, &ft_strcmp);
	ft_print(v);
}
