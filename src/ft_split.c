/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eweiberl <eweiberl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:41:01 by eweiberl          #+#    #+#             */
/*   Updated: 2023/03/25 14:50:59 by eweiberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_substr(char const *s, char c);
static char		*ft_getstr(char const *s, size_t i, char c);
static void		ft_free_strings(void **strings, size_t size);
static size_t	ft_next_pos(char const *s, size_t i, char c);

char	**ft_split(char const *s, char c)
{
	size_t	substr_ctr;
	size_t	substr_fnd;
	size_t	pos_in_str;
	char	**strings;

	substr_fnd = 0;
	pos_in_str = 0;
	substr_ctr = ft_count_substr(s, c);
	strings = (char **)ft_calloc(substr_ctr + 1, sizeof(char *));
	if (!strings)
		return (NULL);
	while (substr_fnd < substr_ctr)
	{
		pos_in_str = ft_next_pos(s, pos_in_str, c);
		strings[substr_fnd] = ft_getstr(s, pos_in_str, c);
		if (!strings[substr_fnd])
		{
			ft_free_strings((void **)strings, substr_fnd);
			return (NULL);
		}
		pos_in_str = pos_in_str + ft_strlen(strings[substr_fnd]);
		substr_fnd++;
	}
	strings[substr_fnd] = NULL;
	return (strings);
}

static char	*ft_getstr(char const *s, size_t i, char c)
{
	size_t	start;
	char	*str;

	while (s[i] == c && s[i])
		i++;
	start = i;
	while (s[i] != c && s[i] != '\0')
		i++;
	str = ft_substr(s, start, (i - start));
	if (!str)
		return (NULL);
	return (str);
}

static size_t	ft_count_substr(char const *s, char c)
{
	size_t	i;
	size_t	ctr;

	i = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			ctr++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (ctr);
}

static void	ft_free_strings(void **strings, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static size_t	ft_next_pos(char const *s, size_t i, char c)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}
