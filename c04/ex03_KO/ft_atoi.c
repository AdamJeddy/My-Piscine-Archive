/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:19:40 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/17 10:51:43 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_sign = 1;

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
		else if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)
				|| (str[i] >= 97 && str[i] <= 122)
				|| (str[i] <= 90 && str[i] >= 65))
			return (-1);
		else if (str[i] >= '0' && str[i] <= '9')
			return (i);
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
	return (num * g_sign);
}
