/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:25:36 by allharut          #+#    #+#             */
/*   Updated: 2023/09/26 14:07:51 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	size_t			i;

	i = 0;
	source = (unsigned char *)s;
	while (i < n)
	{
		if (source[i] == (unsigned char)c)
			return ((void *)&source[i]);
		i++;
	}
	return (NULL);
}
