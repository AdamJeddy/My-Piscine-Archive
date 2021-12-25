/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:23:19 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 10:46:35 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
			return (0);
		str++;
	}
	return (1);
}
