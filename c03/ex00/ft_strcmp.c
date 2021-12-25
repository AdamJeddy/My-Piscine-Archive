/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:38:08 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/16 11:42:04 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countstr(char *str)
{
	int i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int size1;
	int size2;

	size1 = ft_countstr(s1);
	size2 = ft_countstr(s2);
	while (*s1 != '\0' && *s2 != '\0')
	{
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else if ((unsigned char)*s1 < (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	if (size1 > size2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else if (size1 < size2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}
