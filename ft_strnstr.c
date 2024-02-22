/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:16:53 by allharut          #+#    #+#             */
/*   Updated: 2024/02/08 19:12:55 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*src == '\0')
		return ((char *)dest);
	while (dest[i] != '\0' && i < len)
	{
		j = 0;
		while (src[j] && dest[i + j]
			&& src[j] == dest[i + j] && i + j < len)
		{
			j++;
		}
		if (src[j] == '\0')
		{
			if (i + j <= len)
				return ((char *)&dest[i]);
			else
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
