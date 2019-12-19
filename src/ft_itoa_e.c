/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_e.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:08:13 by basylbek          #+#    #+#             */
/*   Updated: 2019/10/25 13:26:35 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_normalize(double *n)
{
	int i;

	i = 0;
	while ((int)(*n) <= 0)
	{
		*n = *n * 10;
		i--;
	}
	while ((int)(*n) >= 10)
	{
		*n = *n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_e(double n, int presc)
{
	char	*s;
	char	*mantissa;
	char	*exponent;
	int		sign;

	sign = 0;
	if (n <= -0.0)
	{
		n = n * -1.0;
		sign = 1;
	}
	exponent = ft_itoa_precision(ft_normalize(&n), 2);
	mantissa = ft_itoa_float(n, presc, 10);
	s = ft_strjoin(mantissa, "e");
	if (exponent[0] != '-')
		s = ft_strjoin(s, "+");
	s = ft_strjoin(s, exponent);
	if (sign)
		s = ft_strjoin("-", s);
	return (s);
}
