/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:08:03 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/12/01 09:20:43 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c, unsigned int str_len)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[str_len + wordlen] && s[str_len + wordlen] != c)
		wordlen++;
	return (wordlen);
}

static	char	**ft_freearray(char **str, size_t index)
{
	size_t	base_index;

	base_index = 0;
	while (base_index <= index)
	{
		free(str[base_index]);
		base_index++;
	}
	free(str);
	return (NULL);
}

static size_t	ft_wordcount(char const *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		str_len;
	size_t		sub_len;
	size_t		index;
	size_t		wordcount;
	char		**str;

	if (!s)
		return (NULL);
	wordcount = ft_wordcount(s, c);
	str = ft_calloc(sizeof(char *), wordcount + 1);
	if (!str)
		return (NULL);
	index = 0;
	str_len = 0;
	while (index < wordcount)
	{
		while (s[str_len] && s[str_len] == c)
			str_len++;
		sub_len = ft_wordlen(s, c, str_len);
		str[index++] = ft_substr(s, str_len, sub_len);
		if (str[index - 1] == NULL)
			return (ft_freearray(str, index));
		str_len += sub_len;
	}
	return (str);
}
