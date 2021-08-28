/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:52:27 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/25 14:32:42 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "operations.h"

int		ft_atoi(char *str)
{
	int num;
	int sign;
	int i;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}

int		ft_check(char op, int val2)
{
	if (val2 == 0 && op == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (val2 == 0 && op == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char hold;
	long nbb;

	nbb = nb;
	if (nbb < 0)
	{
		write(1, "-", 1);
		nbb = -nbb;
	}
	if (nbb >= 10)
	{
		ft_putnbr(nbb / 10);
		ft_putnbr(nbb % 10);
	}
	else
	{
		hold = nbb + 48;
		write(1, &hold, 1);
	}
}
void	ft_do_op(int val1, char op, int val2)
{
	char set[5] = {'+', '-' ,'*' ,'/' ,'%'};
	int	(*fun[5])(int, int) = {
		&ft_op_add, &ft_op_sub, 
		&ft_op_mul, &ft_op_div, &ft_op_mod};
	int i;
	int result;

	i = -1;
	result = 0;
	while (++i < 5)
	{
		if (op == set[i])
			result = (fun[i])(val1, val2);
	}
	ft_putnbr(result);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		val1;
	int		val2;
	char	op;

	if (argc == 4)
	{
		val1 = ft_atoi(argv[1]);
		val2 = ft_atoi(argv[3]);
		if (argv[2][0] == '\0'|| argv[2][1] != '\0')
			op = -1;
		else
			op = argv[2][0];
		if (ft_check(op, val2))
		{
			//printf("%d  %c  %d\n", val1, op, val2);
			//printf("%d", ft_dodo(val1, op, val2));
			ft_do_op(val1, op, val2);
		}
	}
}
