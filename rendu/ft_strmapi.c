/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:25:34 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 18:23:55 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = ft_calloc(sizeof(char), size + 1);
	if (!str)
		return (NULL);
	len = 0;
	while (len < size)
	{
		str[len] = (*f)(len, s[len]);
		len++;
	}
	return (str);
}
