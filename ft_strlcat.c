/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:41:56 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 07:09:27 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			len;
	size_t			ldest;

	i = 0;
	len = ft_strlen (src);
	ldest = ft_strlen (dst);
	if (size == 0)
		return (len);
	while (src[i] && i < (size - 1))
	{
		dst[ldest] = src[i];
		ldest++;
		i++;
	}
	dst[ldest] = '\0';
	if (size <= len)
		return (len);
	else
		return (len + size);
}
