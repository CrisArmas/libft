/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:49:52 by carmas            #+#    #+#             */
/*   Updated: 2023/05/26 17:39:16 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (len > ft_strlen(s)- start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (*s && i < start)
	{
		i++;
		s++;
	}
	while (*s && i - start < len)
	{
		*substr = *s;
		i++;
		s++;
		substr++;
	}
	*substr = '\0';
	return (substr - (len));
}
