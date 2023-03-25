/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:37:44 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/25 17:30:08 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	newstr = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	while (s[i] != 0)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	return (newstr);
}
