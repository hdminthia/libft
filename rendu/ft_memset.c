/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:44:16 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 16:04:44 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static long	ft_set_bit(int c)
{
	long	wc_value;

	wc_value = (long)c & 0xff;
	wc_value |= wc_value << 8;
	wc_value |= wc_value << 16;
	wc_value |= (wc_value << 16) << 16;
	return (wc_value);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_c;
	unsigned char	c_value;
	long			*ptr_wc;
	long			wc_value;
	size_t			data;

	c_value = (unsigned char)c & 0xff;
	wc_value = ft_set_bit(c);
	ptr_c = (unsigned char *)s;
	ptr_wc = (long *)ptr_c;
	data = n >> 3;
	n &= 7;
	while (data--)
		*ptr_wc++ = wc_value;
	ptr_c = (unsigned char *)ptr_wc;
	while (n--)
		*ptr_c++ = c_value;
	return (s);
}

/*while (((size_t)ptr_c % sizeof(long) != 0) && n)
{
	*ptr_c++ = c_value;
	n--;
}*/
