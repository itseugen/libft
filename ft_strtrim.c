/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:39:46 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/23 14:04:17 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	i2 = ft_strlen(s1);
	while (ft_strchr(set, s1[i2]) && i2 > 0)
		i2--;
	return (ft_substr(s1, i, i2 - i + 1));
}
