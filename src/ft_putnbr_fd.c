/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:43:32 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/25 18:55:44 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	usi;
	char			cnt[10];
	int				count;

	count = 0;
	usi = n;
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		usi = -n;
		write(fd, "-", 1);
	}
	while (usi > 0)
	{
		cnt[count] = (usi % 10) + 48;
		usi = usi / 10;
		count++;
	}
	while (count > 0)
	{
		count--;
		write(fd, &cnt[count], 1);
	}
}
