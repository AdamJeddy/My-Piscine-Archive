/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:19:30 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 11:11:41 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_letter(char a)
{
	if ((a <= 'z' && a >= 'a') || ((a <= 'Z' && a >= 'A')))
		return (1);
	return (0);
}

int		check_alpha(char a)
{
	if ((a >= 'a' && a <= 'z')
			|| (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_letter(str[i]) && !check_alpha(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
