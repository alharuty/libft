/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:26:01 by allharut          #+#    #+#             */
/*   Updated: 2023/09/22 11:45:57 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	unsigned char		*ptr_dst;
	unsigned const char	*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned const char *)src;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (length--)
		{
			*(ptr_dst++) = *(ptr_src++);
		}
	}
	else
	{
		ptr_dst += length;
		ptr_src += length;
		while (length--)
		{
			*(--ptr_dst) = *(--ptr_src);
		}
	}
	return (dst);
}
