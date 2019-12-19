/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:37:04 by basylbek          #+#    #+#             */
/*   Updated: 2019/10/23 14:45:36 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (size < 1)
		return (NULL);
	ptr = (char*)malloc(size + 1);
	if (!ptr)
		return (NULL);
	while (i < size + 1)
		ptr[i++] = '\0';
	return (ptr);
}
