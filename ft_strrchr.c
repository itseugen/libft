/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:19:16 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/21 19:42:54 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (str);
	if (ft_strlen(s) == 0 && (unsigned char)c == '\0')
		return (str);
	while (str-- != ((char *)s))
	{
		if (*str == (unsigned char)c)
			return (str);
	}
	return (NULL);
}
