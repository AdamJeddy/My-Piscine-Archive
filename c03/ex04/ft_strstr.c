/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:19:08 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/16 08:30:48 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*search;
	char	*position;

	if (*to_find == '\0')
		return (str);
	search = to_find;
	while ((*str != *to_find) && *str && *to_find)
		str++;
	if (*str == *to_find)
	{
		position = str;
		while ((*str == *to_find) && *str && *to_find)
		{
			str++;
			to_find++;
		}
	}
	if (*to_find == '\0')
		return (position);
	if (*str == '\0')
		return (0);
	return (ft_strstr(str, search));
}