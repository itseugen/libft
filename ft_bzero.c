/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:43:22 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/21 09:53:52 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	char			*str2;

	str2 = (char *)str;
	i = 0;
	while (i < n)
	{
		str2[i] = 0;
		i++;
	}
}
