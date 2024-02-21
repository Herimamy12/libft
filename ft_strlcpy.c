/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:39:36 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 07:22:56 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	if (size < 0)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (size == 0)
		return (len);
	else
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}
