/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:06:31 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 14:36:00 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	src_size = 0;
	i = -1;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (++i < size - 1 && src[i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (src_size);
}
