/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:40:03 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 15:18:02 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long			*ptr_dst;
	long			*ptr_src;
	unsigned char	*src_value;
	unsigned char	*dst_value;
	size_t			data;

	if ((!dest && !src) || !n)
		return (dest);
	ptr_dst = (long *)dest;
	ptr_src = (long *)src;
	data = n >> 3;
	n &= 7;
	while (data--)
		*ptr_dst++ = *ptr_src++;
	dst_value = (unsigned char *)ptr_dst;
	src_value = (unsigned char *)ptr_src;
	while (n--)
		*dst_value++ = *src_value++;
	return (dest);
}

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if ((!dest && !src) || !n)
		return (dest);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}*/
