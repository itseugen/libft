/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:31:50 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/29 12:03:27 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i_dst;
	unsigned int	i_src;
	unsigned int	dest_len;

	dest_len = ft_strlen(dst);
	i_dst = dest_len;
	i_src = 0;
	if (dstsize == 0 || dstsize <= dest_len)
		return (ft_strlen(src) + dstsize);
	while ((i_src < dstsize - dest_len - 1) && src[i_src] != '\0')
	{
		dst[i_dst++] = src[i_src++];
	}
	dst[i_dst] = '\0';
	return (dest_len + ft_strlen(src));
}
