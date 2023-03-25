/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:33:46 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/25 15:52:06 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_len(int n);

char	*ft_itoa(int n)
{
	int				nbr_len;
	char			*nbrstr;
	unsigned int	nbr;

	nbr_len = ft_nbr_len(n);
	nbrstr = (char *)ft_calloc(nbr_len + 1, sizeof(char));
	if (!nbrstr)
		return (NULL);
	nbr = n;
	if (n < 0)
	{
		nbrstr[0] = '-';
		nbr = -n;
	}
	while (nbr_len > 0 && nbrstr[nbr_len - 1] != '-')
	{
		nbrstr[nbr_len - 1] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		nbr_len--;
	}
	return (nbrstr);
}

static int	ft_nbr_len(int n)
{
	int	nbr_len;

	nbr_len = 0;
	if (n == 0 || n < 0)
		nbr_len = 1;
	while (n != 0)
	{
		nbr_len++;
		n = n / 10;
	}
	return (nbr_len);
}
