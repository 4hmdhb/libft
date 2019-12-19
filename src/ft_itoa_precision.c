/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:18:24 by basylbek          #+#    #+#             */
/*   Updated: 2019/10/25 13:27:34 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_precision(int64_t n, int pres)
{
	char	*s;
	int		i;
	int		sign;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
	}
	s = ft_itoa(n);
	i = ft_strlen(s);
	while (i++ < pres)
		s = ft_strjoin("0", s);
	if (sign)
		s = ft_strjoin("-", s);
	return (s);
}
