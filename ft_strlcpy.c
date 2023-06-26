/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:43:28 by carmas            #+#    #+#             */
/*   Updated: 2023/06/07 12:49:18 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < (destsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < destsize)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
