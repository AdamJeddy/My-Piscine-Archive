/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:13:36 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/25 10:13:48 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int				check_set(char ch, char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (ch == str[i])
			return (1);
	return (0);
}

unsigned int	ft_strlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !check_set(str[i], charset))
		i++;
	return (i);
}

int				n_words(char *str, char *sep)
{
	int				i;
	unsigned int	words;
	int				count;

	count = 0;
	i = 0;
	words = 0;
	while (str[i] != '\0' && (check_set(str[i], sep)))
		i++;
	while (str[i] != '\0')
	{
		if (!check_set(str[i], sep) && count == 0)
		{
			words++;
			count = 1;
		}
		else if (check_set(str[i], sep))
			count = 0;
		i++;
	}
	return (words);
}

char			**ft_split(char *str, char *charset)
{
	char			**array;
	int				word;
	int				i;
	unsigned int	length;
	int				count;

	word = 0;
	count = 0;
	i = -1;
	array = (char **)malloc((n_words(str, charset) + 1) * sizeof(char*));
	while (str[++i] != '\0')
	{
		if (!check_set(str[i], charset) && count == 0)
		{
			length = ft_strlen(&str[i], charset);
			array[word] = (char *)malloc((length + 1) * sizeof(char));
			array[word] = ft_strncpy(array[word], &str[i], length);
			word++;
			count = 1;
		}
		else if (check_set(str[i], charset))
			count = 0;
	}
	array[word] = 0;
	return (array);
}
