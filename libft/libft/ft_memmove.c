/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 06:07:58 by mohtakra          #+#    #+#             */
/*   Updated: 2022/10/30 17:43:11 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t numBytes)
{
	char	temp[1];
	size_t	i;
	size_t	last_byte;

	i = 0;
	last_byte = numBytes;
	if (!(unsigned char *)dst && !(unsigned char *)src)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, numBytes);
	else if (src < dst)
	{
		while (last_byte > 0)
		{
			temp[0] = ((unsigned char *)src)[last_byte - 1];
			((unsigned char *)dst)[last_byte-- - 1] = temp[0];
		}
	}
	else if (src == dst)
		ft_memcpy(dst, src, ft_strlen(dst));
	return (dst);
}
