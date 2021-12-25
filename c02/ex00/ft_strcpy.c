/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:08:25 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 10:42:51 by aahsan           ###   ########.fr       */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = -1;
	while (src[++index])
		dest[index] = src[index];
	dest[index] = src[index];
	return (dest);
}