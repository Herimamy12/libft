/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 06:54:53 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/20 06:54:55 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*tdest;
	unsigned char	*tsrc;

	i = 0;
	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	while (tsrc[i] && (i < n))
	{
		tdest[i] = tsrc[i];
		i++;
	}
	dest = (void *)tdest;
	return (dest);
}
