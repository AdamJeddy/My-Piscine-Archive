/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:04:14 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/06 18:40:53 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_bottom(int x, int tempx)
{
	if (x % tempx == 0 || x % tempx == 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	middle(int x, int tempx)
{
	if (x % tempx == 0 || x % tempx == 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int tempx;
	int tempy;

	tempx = x;
	tempy = y;
	while (y > 0 && x > 0)
	{
		while (x > 0)
		{
			if (y % tempy == 0 || y % tempy == 1)
				top_bottom(x, tempx);
			else
				middle(x, tempx);
			x--;
		}
		ft_putchar('\n');
		x = tempx;
		y--;
	}
}
