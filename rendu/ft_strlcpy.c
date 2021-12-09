/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:58:42 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 17:20:35 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (*src && size > 1)
	{
		*dst++ = *src++;
		len++;
		size--;
	}
	if (size != 0)
		*dst = '\0';
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}

/*size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	if (!dst || !src)
		return (0);
	srclen = ft_strlen(src);
	if (size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}*/
