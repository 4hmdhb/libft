/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:14:18 by basylbek          #+#    #+#             */
/*   Updated: 2019/10/25 13:29:29 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int64_t		ft_pow(int64_t n, int base)
{
	int64_t tmp;

	tmp = 1;
	base = (base < 0) ? base * -1 : base;
	while (base--)
		tmp = n * tmp;
	return (tmp);
}
