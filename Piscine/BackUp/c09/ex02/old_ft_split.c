/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:43:39 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/24 11:05:00 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
		dest[index++] = '\0';
	return (dest);
}

int			is_char_in_string(char c, char *set)
{
	int		i;

	i = 0;
	while (1)
	{
		if (set[i] == '\0')
			return (c == '\0');
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			count(char *str, char *charset)
{
	int		count;
	char	*previous;
	char	*next;
	int		i;

	i = 0;
	count = 0;
	previous = str;
	next = str;
	while (1)
	{
		if (is_char_in_string(str[i], charset))
			next = &str[i];
		if (next - previous > 1)
			count++;
		if (str[i] == '\0')
			break ;
		previous = next;
		i++;
	}
	return (count);
}

int			add(char **entry, char *previous, int size, char *charset)
{
	if (is_char_in_string(previous[0], charset))
	{
		previous++;
		size--;
	}
	*entry = malloc(sizeof(char) * (size + 3));
	ft_strncpy(*entry, previous, size);
	(*entry)[size] = '\0';
	return (1);
}

char		**ft_split(char *str, char *charset)
{
	int		index;
	int		size;
	char	*previous;
	char	*next;
	char	**array;

	array = malloc(sizeof(char *) * (count(str, charset) + 1));
	index = 0;
	previous = str;
	next = str;
	while (1)
	{
		
		if (is_char_in_string(*str, charset))
			next = str;
		if ((size = next - previous) > 1)
			index += add(&array[index], previous, size, charset);
		if (*str == '\0')
			break ;
		previous = next;
		str++;
	}
	array[index] = 0;
	return (array);
}
