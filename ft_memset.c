/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:27:58 by carmas            #+#    #+#             */
/*   Updated: 2023/05/30 13:03:42 by carmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*tmp_str;
	unsigned char	tmp_char;

	tmp_str = s;
	tmp_char = c;
	while (len-- > 0)
	{
		*tmp_str++ = tmp_char;
	}
	return (s);
}
