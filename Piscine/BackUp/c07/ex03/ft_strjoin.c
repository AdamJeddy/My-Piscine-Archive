/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:06:39 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/20 21:50:56 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

int			ft_count2d(int size, char **strs, char *sep)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size && strs[i] != NULL)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(str));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_count2d(size, strs, sep));
	if (str == NULL)
		return (NULL);
	while (i < size && strs[i] != NULL)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str) + 1] = '\0';
	return (str);
}
