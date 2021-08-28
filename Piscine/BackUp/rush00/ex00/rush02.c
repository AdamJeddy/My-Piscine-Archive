/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:04:14 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/06 18:58:51 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_bottom(int x, int y, int tempx, int tempy)
{
	if (x % tempx == 0 && y % tempy == 0)
		ft_putchar('A');
	else if (x % tempx == 1 && y % tempy == 1)
		ft_putchar('C');
	else if (x % tempx == 1 && y % tempy == 0)
		ft_putchar('A');
	else if (x % tempx == 0 && y % tempy == 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	middle(int x, int tempx)
{
	if (x % tempx == 0 || x % tempx == 1)
		ft_putchar('B');
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
				top_bottom(x, y, tempx, tempy);
			else
				middle(x, tempx);
			x--;
		}
		ft_putchar('\n');
		x = tempx;
		y--;
	}
}
