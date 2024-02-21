/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:09:36 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 07:13:14 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return (s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while ((s2[j] == s1[i + j]) && (i + j) < len)
			{
				if (s2[j + 1] == '\0')
					return ((char *)&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
