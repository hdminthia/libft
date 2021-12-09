/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:05:21 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 15:27:42 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (*dst && len < size)
	{
		len++;
		dst++;
	}
	while (*src && len + 1 < size)
	{
		*dst = *src;
		len++;
		dst++;
		src++;
	}
	if (len < size)
		*dst = '\0';
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}
