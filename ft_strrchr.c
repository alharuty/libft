/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:46:49 by allharut          #+#    #+#             */
/*   Updated: 2023/09/22 10:57:53 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	length;

	length = ft_strlen(str);
	if (length == '\0')
	{
		exit (0);
	}
	while (length >= 0)
	{
		if (str[length] == (char) c)
		{
			return ((char *)&str[length]);
		}
		length--;
	}
	return (NULL);
}
