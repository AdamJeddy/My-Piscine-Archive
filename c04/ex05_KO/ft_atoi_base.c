/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:36:37 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/15 13:43:44 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		g_sign = 1;
int		g_i = 0;

int		remove_extra(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i])
	{
		if (str[i] == '-')
			g_sign *= -1;
		else if (str[i] == '+')
		{
			i++;
			continue ;
		}
		else if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			return (-1);
		else if (str[i] >= '0' && str[i] <= '9')
			return (i);
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (-1);
}

int		ft_atoi(char *str)
{
	int i;
	int num;

	num = 0;
	i = remove_extra(str);
	if (i < 0)
		return (num);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + (str[i] - '0');
		else
			return (num * g_sign);
		i++;
	}
	return (num);
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

int		ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	answer[50] = {'\0'};
	long	temp;

	temp = nbr;
	size = check_base(base);
//printf("Inputs:\n\tnbr: %i\n\tbase: %s\n\tsize: %i\n", nbr, base, size);
	if (size == -1)
		return (0);
	if (temp == 0)
		return (base[0]);
	while (temp)
	{
		answer[g_i++] = base[temp % size];
		temp /= size;
//printf("\t\t Char:%c \t temp:%li\n", answer[g_i - 1], temp);
	}
//printf("Final Number: %s\n", answer);
	return (ft_atoi(answer));
}

int		ft_atoi_base(char *str, char *base)
{
	int num;
	int reminder;
	int final;

	final = 0;
//printf("To Atoi: %i\n", ft_atoi(str));
	num = ft_putnbr_base(ft_atoi(str), base);
//printf("Nbr to base: %i\n", num);
	while (num != 0)
	{
		reminder = num % 10;
		final = final * 10 + reminder;
		num /= 10;
	}
	if (final < 0)
		return (final);
	return (final * g_sign);
}
