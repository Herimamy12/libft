/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:27:29 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/20 08:27:38 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*tdest;
	unsigned char	*tsrc;

	i = 0;
	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	while (tsrc[i] && i < n)
	{
		tdest[i] = tsrc[i];
		i++;
	}
	dest = (void *)tdest;
	return (dest);
}
