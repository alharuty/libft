/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:52:35 by allharut          #+#    #+#             */
/*   Updated: 2024/02/08 19:09:31 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long int i)
{
	int			counter;
	int			negative;

	counter = 0;
	negative = 0;
	if (i == 0)
	{
		counter = 1;
		return (counter);
	}
	if (i < 0)
	{
		negative = 1;
		i *= -1;
	}
	while (i > 0)
	{
		i /= 10;
		counter++;
	}
	return (counter + negative);
}

static long long	int_sign(long long n) // averiguar signo del int
{
	int			sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

static long long	abs_num(long long n)
{
	long long	nbr;

	nbr = 1;
	if (n < 0)
		nbr *= -n;
	else
		nbr *= n;
	return (nbr);
}

static char	*str_new(size_t n)
{
	char		*str;

	str = (char *)malloc(sizeof(char) * (digit_counter(n) + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	sign = int_sign(n);
	len = digit_counter(n);
	str = str_new(n);
	if (!str)
		return (NULL);
	nbr = abs_num(n);
	str[len] = '\0';
	while (len--)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
