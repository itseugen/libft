/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:35:02 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/27 13:38:42 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)(haystack));
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (i < len && i + ft_strlen(needle) <= len && haystack[i] != '\0')
	{
		i2 = 0;
		if (haystack[i] == needle[0])
		{
			while (haystack[i + i2] == needle[i2])
			{
				if (i2 == ft_strlen(needle) - 1)
					return ((char *)(haystack + i));
				i2++;
			}
		}
		i++;
	}
	return (NULL);
}
