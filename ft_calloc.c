/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:17:03 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 08:17:06 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*tmp;

	ptr = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	tmp = (char *)malloc(size * nmemb);
	if (tmp == NULL)
		return (NULL);
	ptr = (void *)tmp;
	return (ptr);
}
