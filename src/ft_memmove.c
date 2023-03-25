/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:33:23 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/21 14:57:49 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;

	dst2 = (char *)dst;
	src2 = (const char *)src;
	if (!dst2 && !src2)
		return (NULL);
	if (dst2 < src2)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	else
	{
		dst2 += len - 1;
		src2 += len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	return (dst);
}
