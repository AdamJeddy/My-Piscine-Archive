/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:23:46 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/10 11:20:13 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = -1;
	while (++index < n && src[index] != '\0')
		dest[index] = src[index];
	while (index < n)
		dest[index++] = '\0';
	return (dest);
}