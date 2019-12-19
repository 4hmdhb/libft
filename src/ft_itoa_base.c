/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:12:08 by basylbek          #+#    #+#             */
/*   Updated: 2019/10/25 15:38:25 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int64_t num, int base)
{
	char	*str;
	int		i;
	int		rem;

	i = ft_numlen_base(num, base);
	if (!(str = ft_strnew(i)))
		return (NULL);
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		num = num * (-1);
		str[0] = '-';
	}
	while (num)
	{
		rem = num % base;
		str[--i] = (rem >= 10) ? 'a' + (rem - 10) : rem + '0';
		num = num / base;
	}
	return (str);
}
