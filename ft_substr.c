/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:09:59 by allharut          #+#    #+#             */
/*   Updated: 2023/10/05 13:09:59 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub_string;
	size_t		sub_len;
	size_t		s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	if (start >= s1_len)
		return (ft_strdup(""));
	if (len < s1_len - start)
		sub_len = len;
	else
		sub_len = s1_len - start;
	sub_string = (char *)malloc(sub_len + 1);
	if (sub_string == NULL)
		return (NULL);
	while (i < sub_len)
	{
		sub_string[i] = s1[start + i];
		i++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}
