/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:42:45 by hdo-minh          #+#    #+#             */
/*   Updated: 2021/11/30 17:35:43 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	ch;

	ptr_s = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr_s == ch)
			return ((void *)ptr_s);
		ptr_s++;
	}
	return (NULL);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	long	*ptr_s;
	long	*tmp;
	long	charmask;
	unsigned char	*s_value;
	unsigned char	ch;
	size_t	len;

	tmp = NULL;
	ptr_s = (long *)s;
	charmask = (long)c & 0xff;
	charmask |= charmask << 8;
	charmask |= charmask << 16;
	charmask |= (charmask << 16) << 16;
	while (n)
	{
		*tmp = *ptr_s ^ charmask;
		if (*tmp - 0x01010101UL & ~(*tmp) & 0x80808080UL != 0)
			break ;
		n -= 8;
		ptr_s++;
	}
	s_value = (unsigned char *)ptr_s;
	ch = (unsigned char)c;
	len = 8;
	while (len--)
	{
		if (*s_value == ch)
			return ((void *)s_value);
		s_value++;
	}
	return (NULL);	
}*/
