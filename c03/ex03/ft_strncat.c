/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan				                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:10:12 by aahsan            #+#    #+#             */
/*   Updated: 2021/08/16 11:41:14 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*store;

	store = dest;
	while (*dest++)
		;
	dest--;
	while (*src && nb != 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (store);
}
