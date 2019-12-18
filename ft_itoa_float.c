/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_float.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:10:13 by basylbek          #+#    #+#             */
/*   Updated: 2019/10/25 13:35:33 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_float(double n, int presc, int base)
{
	int		ipart;
	double	fpart;
	char	*s;
	int		sign;

	sign = 0;
	if (n < 0.0)
	{
		n = n * -1.0;
		sign = 1;
	}
	ipart = (int)n;
	fpart = n - (float)ipart;
	s = ft_itoa_base(ipart, base);
	if (presc != 0)
	{
		s = ft_strjoin(s, ".");
		fpart = fpart * ft_pow(base, presc);
		s = ft_strjoin(s, ft_itoa_precision((int)fpart, presc));
	}
	if (sign)
		s = ft_strjoin("-", s);
	return (s);
}
