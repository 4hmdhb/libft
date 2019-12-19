/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:50:18 by basylbek          #+#    #+#             */
/*   Updated: 2019/09/22 14:53:39 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (i);
}
