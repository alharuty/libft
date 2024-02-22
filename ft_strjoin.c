/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:30:22 by allharut          #+#    #+#             */
/*   Updated: 2024/02/13 19:49:19 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;
	size_t		j;
	char		*result;

	i = 0;
	j = 0;
	s1_len = 0;
	s2_len = 0;
	if (s1 != NULL && s2 != NULL)
		s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(s1_len + s2_len + 1);
	if ((s1 == NULL && s2 == NULL) || result == NULL)
		return (NULL);
	if (s1_len > 0)
		ft_memcpy(result, s1, s1_len);
	if (s2_len > 0)
		ft_memcpy(result + s1_len, s2, s2_len);
	result[s1_len + s2_len] = '\0';
	return (result);
}
