/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:37:18 by carmas            #+#    #+#             */
/*   Updated: 2023/06/07 16:23:47 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ts(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	littlelen = ft_strlen(little);
	i = 0;
	while (big[i] && i < len && littlelen <= len - i)
	{
		if (ts(big + i, little, len - i))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
