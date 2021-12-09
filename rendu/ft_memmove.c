/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:48:44 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 16:01:41 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	size_t			data;
	long			*ptr_dst;
	long			*ptr_src;
	unsigned char	*src_value;
	unsigned char	*dst_value;

	dst_value = (unsigned char *)dest + n - 8;
	src_value = (unsigned char *)src + n - 8;
	ptr_dst = (long *)dst_value;
	ptr_src = (long *)src_value;
	data = n >> 3;
	n &= 7;
	while (data--)
		*ptr_dst-- = *ptr_src--;
	dst_value = (unsigned char *)ptr_dst + 7;
	src_value = (unsigned char *)ptr_src + 7;
	while (n--)
		*dst_value-- = *src_value--;
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!dest && !src) || !n)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else
		return (ft_memrcpy(dest, src, n));
}

/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!dest && !src) || !n)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else
	{
		unsigned char	*ptr_dest;
		unsigned char	*ptr_src;

		ptr_dest = (unsigned char *)dest + n - 1;
		ptr_src = (unsigned char *)src + n - 1;
		while (n--)
			*ptr_dest-- = *ptr_src--;
		return (dest);
	}
}*/
