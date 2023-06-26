/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:40:07 by carmas            #+#    #+#             */
/*   Updated: 2023/05/31 17:21:46 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	strjoin = (char *)malloc(sizeof(char) * size);
	if (strjoin == NULL)
		return (NULL);
	ft_strlcpy(strjoin, s1, size);
	ft_strlcat(strjoin, s2, size);
	return (strjoin);
}
